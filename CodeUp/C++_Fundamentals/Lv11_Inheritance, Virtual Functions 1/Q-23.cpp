#include <iostream>
using namespace std;

class Device {
protected:
    string mName = "";
public:
    Device(string name) : mName(name) {}
    virtual void PowerOn() = 0;
    virtual void PowerOff() = 0;
    virtual void ShowInfo() = 0;
    virtual ~Device() {}
};

class Smartphone : public Device {
public:
    Smartphone(string name) : Device(name) {}
    void PowerOn() override { cout << mName << " 전원 켜짐" << endl; }
    void PowerOff() override { cout << mName << " 전원 꺼짐" << endl; }
    void ShowInfo() override { cout << mName << " 스마트폰" << endl; }
};

class SmartWatch : public Device {
public:
    SmartWatch(string name) : Device(name) {}
    void PowerOn() override { cout << mName << " 전원 켜짐" << endl; }
    void PowerOff() override { cout << mName << " 전원 꺼짐" << endl; }
    void ShowInfo() override { cout << mName << " 스마트워치" << endl; }
};

int main()
{
    Smartphone sp("Galaxy");
    SmartWatch sw("Apple Watch");
    Device* devices[] = { &sp, &sw };
    for (int i = 0; i < 2; ++i) {
        devices[i]->PowerOn();
        devices[i]->ShowInfo();
        devices[i]->PowerOff();
    }

    return 0;
}