#include <iostream>
#include <string>

class Flight; // Forward declaration of Flight class

class Passenger {
private:
    std::string name;
public:
    Passenger(const std::string& name) : name(name) {}

    void bookFlight(Flight& flight);
    void display() const;
};

class Flight {
private:
    std::string flightNumber;
    int capacity;
    int bookedSeats;
public:
    Flight(const std::string& flightNumber, int capacity)
        : flightNumber(flightNumber), capacity(capacity), bookedSeats(0) {}

    friend class Passenger; // Allow Passenger class to access private members

    void display() const;
};

void Passenger::bookFlight(Flight& flight) {
    if (flight.bookedSeats < flight.capacity) {
        flight.bookedSeats++;
        std::cout << name << " has booked flight " << flight.flightNumber << std::endl;
    } else {
        std::cout << "Flight " << flight.flightNumber << " is fully booked." << std::endl;
    }
}

void Passenger::display() const {
    std::cout << "Passenger Name: " << name << std::endl;
}

void Flight::display() const {
    std::cout << "Flight Number: " << flightNumber << std::endl;
    std::cout << "Capacity: " << capacity << std::endl;
    std::cout << "Booked Seats: " << bookedSeats << std::endl;
}

int main() {
    Flight flight("F001", 10);
    Passenger passenger("John Doe");

    // Display initial details
    passenger.display();
    flight.display();

    // Book flight for passenger
    passenger.bookFlight(flight);

    // Display updated flight details
    flight.display();

    return 0;
}

