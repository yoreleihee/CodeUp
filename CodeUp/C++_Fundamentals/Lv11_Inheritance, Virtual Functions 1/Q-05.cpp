#include <iostream>
using namespace std;

class Character {
protected:
    string mName = "";
public:
    Character(string name) : mName(name) {}
    virtual void Attack() = 0;
    virtual ~Character() {}
};

class Knight : public Character {
public:
    Knight(string name) : Character(name) {}
    void Attack() override {
        cout << mName << " slashes with sword!" << endl;
    }
};

class Mage : public Character {
public:
    Mage(string name) : Character(name) {}
    void Attack() override {
        cout << mName << " casts a spell!" << endl;
    }
};

int main()
{
    Knight k("Arthur"); Mage m2("Merlin");
    Character* party[] = { &k, &m2 };
    for (int i = 0; i < 2; ++i)
        party[i]->Attack();

    return 0;
}