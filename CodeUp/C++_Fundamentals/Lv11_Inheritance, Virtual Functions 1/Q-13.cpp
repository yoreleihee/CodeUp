#include <iostream>
using namespace std;

class GameUnit {
protected:
    int mHp = 0;
public:
    GameUnit(int hp) : mHp(hp) {}
    virtual ~GameUnit() {}
};

class Character : public GameUnit {
protected:
    string mName = "";
public:
    Character(string name, int hp) : GameUnit(hp), mName(name) {}
    virtual void ShowStatus() = 0;
};

class Warrior : public Character {
    int mAttack = 0;
public:
    Warrior(string name, int hp, int attack)
            : Character(name, hp), mAttack(attack) {}
    void ShowStatus() override {
        cout << mName << " HP:" << mHp << " ATK:" << mAttack << endl;
    }
};

class Wizard : public Character {
    int mMagic = 0;
public:
    Wizard(string name, int hp, int magic)
            : Character(name, hp), mMagic(magic) {}
    void ShowStatus() override {
        cout << mName << " HP:" << mHp << " MGC:" << mMagic << endl;
    }
};

int main()
{
    Warrior w("Gorath", 100, 30);
    Wizard wiz("Azura", 80, 50);
    Character* party[] = { &w, &wiz };
    for (int i = 0; i < 2; ++i)
        party[i]->ShowStatus();

    return 0;
}