#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void StartEngine() = 0;
    virtual void Drive() = 0;
    virtual void StopEngine() = 0;
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    void StartEngine() override { cout << "Car: vroom!" << endl; }
    void Drive() override { cout << "Car: driving" << endl; }
    void StopEngine() override { cout << "Car: engine off" << endl; }
};

class Motorcycle : public Vehicle {
public:
    void StartEngine() override { cout << "Motorcycle: roar!" << endl; }
    void Drive() override { cout << "Motorcycle: riding" << endl; }
    void StopEngine() override { cout << "Motorcycle: engine off" << endl; }
};

int main()
{
    Car c; Motorcycle m;
    Vehicle* vehicles[] = { &c, &m };
    for (int i = 0; i < 2; ++i) {
        vehicles[i]->StartEngine();
        vehicles[i]->Drive();
        vehicles[i]->StopEngine();
    }

    return 0;
}