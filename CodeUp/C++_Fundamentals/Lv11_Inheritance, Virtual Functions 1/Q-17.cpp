#include <iostream>
using namespace std;

class Drink {
protected:
    string mName = "";
    int mPrice = 0;
public:
    Drink(string name, int price) : mName(name), mPrice(price) {}
    virtual void Dispense() = 0;
    virtual ~Drink() {}
};

class Soda : public Drink {
public:
    Soda(string name, int price) : Drink(name, price) {}
    void Dispense() override {
        cout << "Dispensing soda with ice" << endl;
    }
};

class Juice : public Drink {
public:
    Juice(string name, int price) : Drink(name, price) {}
    void Dispense() override {
        cout << "Dispensing fresh juice" << endl;
    }
};

int main()
{
    Soda soda("Coke", 1500); Juice juice("Orange", 2000);
    Drink* drinks[] = { &soda, &juice };
    for (int i = 0; i < 2; ++i)
        drinks[i]->Dispense();

    return 0;
}