#include <iostream>
using namespace std;

class CoffeeMachine{
    int mCoffee;
    int mWater;
    int mSugar;

    int mInitCoffee;
    int mInitWater;
    int mInitSugar;

public:
    CoffeeMachine(int coffee, int water, int sugar)
            : mCoffee(coffee), mWater(water), mSugar(sugar),
              mInitCoffee(coffee), mInitWater(water), mInitSugar(sugar) {}


    void drinkEspresso() {
        mCoffee -= 1;
        mWater -= 1;
    }

    void drinkAmericano() {
        mCoffee -= 1;
        mWater -= 2;
    }

    void drinkSugerCoffee() {
        mCoffee -= 1;
        mWater -= 2;
        mSugar -= 1;
    }

    void fill() {
        mCoffee = mInitCoffee;
        mWater = mInitWater;
        mSugar = mInitSugar;
    }

    void show() {
        cout << "커피: " << mCoffee
             << ", 물: " << mWater
             << ", 설탕: " << mSugar << endl;
    }
};

int main()
{
    CoffeeMachine java(5, 10, 3);

    java.drinkEspresso();
    java.show();

    java.drinkAmericano();
    java.show();

    java.drinkSugerCoffee();
    java.show();

    java.fill();
    java.show();

    return 0;
}