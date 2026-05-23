#include <iostream>
using namespace std;

class Item {
protected:
    string mName = "";
    int mPrice = 0;
public:
    Item(string name, int price) : mName(name), mPrice(price) {}
    virtual void GetInfo() = 0;
    virtual ~Item() {}
};

class Weapon : public Item {
    int mAttack = 0;
public:
    Weapon(string name, int price, int attack)
            : Item(name, price), mAttack(attack) {}
    void GetInfo() override {
        cout << mName << " price:" << mPrice << " attack:" << mAttack << endl;
    }
};

class Potion : public Item {
    int mHeal = 0;
public:
    Potion(string name, int price, int heal)
            : Item(name, price), mHeal(heal) {}
    void GetInfo() override {
        cout << mName << " price:" << mPrice << " heal:" << mHeal << endl;
    }
};

int main()
{
    Weapon sword("Iron Sword", 100, 25);
    Potion hp("Health Potion", 50, 30);
    Item* items[] = { &sword, &hp };
    for (int i = 0; i < 2; ++i)
        items[i]->GetInfo();

    return 0;
}