#include <iostream>
using namespace std;

class Monster {
protected:
    string mName = "";
    int mHp = 0;
public:
    Monster(string name, int hp) : mName(name), mHp(hp) {}
    virtual void Attack() = 0;
    virtual ~Monster() {}
};

class Goblin : public Monster {
public:
    Goblin(string name, int hp) : Monster(name, hp) {}
    void Attack() override {
        cout << mName << " throws rock!" << endl;
    }
};

class Orc : public Monster {
public:
    Orc(string name, int hp) : Monster(name, hp) {}
    void Attack() override {
        cout << mName << " swings axe!" << endl;
    }
};

int main()
{
    Goblin g("Goblin", 50); Orc o("Orc", 100);
    Monster* monsters[] = { &g, &o };
    for (int i = 0; i < 2; ++i)
        monsters[i]->Attack();

    return 0;
}