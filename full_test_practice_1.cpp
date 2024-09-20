#include <iostream>
using namespace std;

class Metropolis {
private:
    int Mcode;
    string Mname;
    int Mpop;
    double Area;
    double Popden;

public:
    
    Metropolis(int Mco, string Mna, int Mpo, double Ar) {
        Mcode = Mco;
        Mname = Mna;
        Mpop = Mpo;
        Area = Ar;
        Popden = float(Mpop) / Area;
    }
    
    void display() {
        cout<<"Code: "<<Mcode<<endl;
        cout<<"Name: "<<Mname<<endl;
        cout<<"Population: "<<Mpop<<endl;
        cout<<"Area: "<<Area<<"sq.km"<<endl;
        cout<<"Population Density:"<<Popden<<" people/sq.km"<<endl;
    }
};

int main() {
    Metropolis obj(3400, "Aditya", 78565, 4466.0); 
    obj.display();
   
}

