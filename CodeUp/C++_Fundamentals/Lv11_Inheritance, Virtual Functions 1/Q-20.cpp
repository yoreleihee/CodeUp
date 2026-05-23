#include <iostream>
using namespace std;

class Robot {
protected:
    string mName = "";
public:
    Robot(string name) : mName(name) {}
    virtual void Move() = 0;
    virtual void Work() = 0;
    virtual ~Robot() {}
};

class CleaningRobot : public Robot {
public:
    CleaningRobot(string name) : Robot(name) {}
    void Move() override { cout << "moves slowly" << endl; }
    void Work() override { cout << "cleans floor" << endl; }
};

class DeliveryRobot : public Robot {
public:
    DeliveryRobot(string name) : Robot(name) {}
    void Move() override { cout << "moves fast" << endl; }
    void Work() override { cout << "delivers package" << endl; }
};

int main()
{
    CleaningRobot cr("Roomba"); DeliveryRobot dr("DeliveryBot");
    Robot* robots[] = { &cr, &dr };
    for (int i = 0; i < 2; ++i) {
        robots[i]->Move();
        robots[i]->Work();
    }

    return 0;
}