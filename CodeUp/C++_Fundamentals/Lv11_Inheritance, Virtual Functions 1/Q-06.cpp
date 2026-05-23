#include <iostream>
using namespace std;

class SmartDevice {
public:
    virtual void Execute(string command) = 0;
    virtual ~SmartDevice() {}
};

class SmartLight : public SmartDevice {
public:
    void Execute(string command) override {
        if (command == "turn on")
            cout << "Light is on!" << endl;
        else if (command == "turn off")
            cout << "Light is off!" << endl;
        else
            cout << "Light: unknown command" << endl;
    }
};

class SmartSpeaker : public SmartDevice {
public:
    void Execute(string command) override {
        if (command == "turn on")
            cout << "Speaker is playing music!" << endl;
        else if (command == "turn off")
            cout << "Speaker is off!" << endl;
        else
            cout << "Speaker: unknown command" << endl;
    }
};

int main()
{
    SmartLight sl; SmartSpeaker ss;
    SmartDevice* devices[] = { &sl, &ss };
    for (int i = 0; i < 2; ++i)
        devices[i]->Execute("turn on");

    return 0;
}