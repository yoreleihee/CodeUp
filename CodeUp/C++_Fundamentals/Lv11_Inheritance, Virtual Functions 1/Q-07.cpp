#include <iostream>
using namespace std;

class Unit {
protected:
    string mName = "";
public:
    Unit(string name) : mName(name) {}
    virtual void Move() = 0;
    virtual ~Unit() {}
};

class Warrior : public Unit {
public:
    Warrior(string name) : Unit(name) {}
    void Move() override {
        cout << mName << " charges forward!" << endl;
    }
};

class Archer : public Unit {
public:
    Archer(string name) : Unit(name) {}
    void Move() override {
        cout << mName << " rolls to the side!" << endl;
    }
};

int main()
{
    Warrior w("Thor"); Archer a("Robin");
    Unit* units[] = { &w, &a };
    for (int i = 0; i < 2; ++i)
        units[i]->Move();

    return 0;
}