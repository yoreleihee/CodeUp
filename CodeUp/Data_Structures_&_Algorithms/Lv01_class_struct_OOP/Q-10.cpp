#include <iostream>
using namespace std;

struct Wheel {
    int inch;
    int radius;
};

class Car {
public:
    string name;
    Wheel wheels[4] = {};
    int speed;
    int fuel;
    void PrintData() {
        cout << name << endl;
        cout << "speed : " << speed << "km" << endl;
        cout << "fuel : " << fuel << "l" << endl;
        for (int i = 0; i < size(wheels); ++i) {
            cout << "wheel[" << i << "] : " << "size "
            << wheels[i].inch << "inch radius "
            << wheels[i].radius << "cm" << endl;
        }
    }
};

int main()
{
    Car feraril;
    feraril.name = "feraril";
    feraril.speed = 200;
    feraril.fuel = 100;
    for (int i = 0; i < 4; ++i) {
        feraril.wheels[i].inch = 5;
        feraril.wheels[i].radius = 20;
    }

    feraril.PrintData();

    Car avante;
    avante.name = "avante";
    avante.speed = 100;
    avante.fuel = 50;
    for (int i = 0; i < 4; ++i) {
        avante.wheels[i].inch = 3;
        avante.wheels[i].radius = 20;
    }

    avante.PrintData();
    return 0;
}