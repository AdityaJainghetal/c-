#include <iostream>
using namespace std;

class Time {
private:
    int hours1, min1;
    int hours2, min2;

public:
    Time(int h, int m, int hr, int mi) {
        hours1 = h;
        min1 = m;
        hours2 = hr;
        min2 = mi;
    }

    void convert_into_main() {
        int total = hours1 + hours2;
        int total_2 = min1 + min2;
        int temp=hours2*60 + min2;
        cout<<"total mintues"<<temp<<endl;

        if (total_2 >= 60) {
            total += total_2 / 60;
            total_2 = total_2 % 60;  
        }

        cout << "Total time: " << total << " hours " << total_2 << " minutes" <<"total mintues"<<temp<< endl;
    }
};

int main() {
    Time obj(3, 50, 2, 20);
    obj.convert_into_main();
}

