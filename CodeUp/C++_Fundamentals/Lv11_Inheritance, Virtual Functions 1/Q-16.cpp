#include <iostream>
using namespace std;

class Account {
protected:
    int mBalance = 0;
public:
    Account(int balance) : mBalance(balance) {}
    virtual void Deposit(int amount) = 0;
    virtual void Withdraw(int amount) = 0;
    virtual void ShowBalance() = 0;
    virtual ~Account() {}
};

class SavingsAccount : public Account {
    double mInterest = 0;
public:
    SavingsAccount(int balance, double interest)
            : Account(balance), mInterest(interest) {}
    void Deposit(int amount) override {
        mBalance += amount * (1 + mInterest);
    }
    void Withdraw(int amount) override {
        mBalance -= amount;
    }
    void ShowBalance() override {
        cout << "SavingsAccount balance:" << mBalance << endl;
    }
};

class CheckingAccount : public Account {
    double mFee = 0;
public:
    CheckingAccount(int balance, double fee)
            : Account(balance), mFee(fee) {}
    void Deposit(int amount) override {
        mBalance += amount;
    }
    void Withdraw(int amount) override {
        mBalance -= amount * (1 + mFee);
    }
    void ShowBalance() override {
        cout << "CheckingAccount balance:" << mBalance << endl;
    }
};

int main()
{
    SavingsAccount sa(1000, 0.03);
    CheckingAccount ca(2000, 1.5);
    Account* accounts[] = { &sa, &ca };
    for (int i = 0; i < 2; ++i) {
        accounts[i]->Deposit(500);
        accounts[i]->Withdraw(200);
        accounts[i]->ShowBalance();
    }

    return 0;
}