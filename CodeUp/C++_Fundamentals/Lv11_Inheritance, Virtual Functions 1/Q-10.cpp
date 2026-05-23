#include <iostream>
using namespace std;

class Payment {
protected:
    int mAmount = 0;
public:
    Payment(int amount) : mAmount(amount) {}
    virtual void Process() = 0;
    virtual ~Payment() {}
};

class CreditCard : public Payment {
public:
    CreditCard(int amount) : Payment(amount) {}
    void Process() override {
        cout << "Processing credit card payment: " << mAmount << endl;
    }
};

class Cash : public Payment {
public:
    Cash(int amount) : Payment(amount) {}
    void Process() override {
        cout << "Processing cash payment: " << mAmount << endl;
    }
};

int main()
{
    CreditCard cc(10000); Cash cash(5000);
    Payment* payments[] = { &cc, &cash };
    for (int i = 0; i < 2; ++i)
        payments[i]->Process();

    return 0;
}