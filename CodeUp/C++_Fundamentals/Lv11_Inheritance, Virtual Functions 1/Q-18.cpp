#include <iostream>
using namespace std;

class Transport {
protected:
    int mDistance = 0;
public:
    Transport(int distance) : mDistance(distance) {}
    virtual int CalculateFare() = 0;
    virtual ~Transport() {}
};

class Taxi : public Transport {
public:
    Taxi(int distance) : Transport(distance) {}
    int CalculateFare() override {
        return mDistance * 1000;
    }
};

class Bus : public Transport {
public:
    Bus(int distance) : Transport(distance) {}
    int CalculateFare() override {
        return 1500;
    }
};

int main()
{
    Taxi taxi(5); Bus bus(5);
    Transport* transports[] = { &taxi, &bus };
    for (int i = 0; i < 2; ++i)
        std::cout << transports[i]->CalculateFare() << std::endl;

    return 0;
}