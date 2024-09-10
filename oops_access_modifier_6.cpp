#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;

public:
    Car(const std::string& make, const std::string& model)
        : make(make), model(model) {}

    std::string getMake() const { return make; }
    std::string getModel() const { return model; }
};


class CarEngine : public Car {
private:
    std::string engine_type;
    int engine_no_of_cylinders;

public:
    CarEngine(const std::string& make, const std::string& model, const std::string& engine_type, int engine_no_of_cylinders)
        : Car(make, model), engine_type(engine_type), engine_no_of_cylinders(engine_no_of_cylinders) {}

 
    void getter() const {
        std::cout << "Car Make: " << getMake() << std::endl;
        std::cout << "Car Model: " << getModel() << std::endl;
        std::cout << "Engine Type: " << engine_type << std::endl;
        std::cout << "Number of Cylinders: " << engine_no_of_cylinders << std::endl;
    }
};

int main() {
   
    CarEngine myCar("Toyota", "Camry", "V6", 6);

  
    myCar.getter();

    return 0;
}

