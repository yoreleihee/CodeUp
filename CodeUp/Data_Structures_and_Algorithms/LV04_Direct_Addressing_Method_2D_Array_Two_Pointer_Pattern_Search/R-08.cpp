#include <iostream>
#include <cstring>
using namespace std;

class Account {
private:
    char* mOwner;
    int mAccount;
    int mBalance;

public:
    Account(const char* owner, int account, int balance) {
        mOwner = new char[strlen(owner) + 1];
        strcpy(mOwner, owner);

        mAccount = account;
        mBalance = balance;
    }

    void deposit(int money) {
        mBalance += money;
    }

    int withdraw(int money) {
        if (mBalance >= money) {
            mBalance -= money;
            return money;
        }
        return 0; // 실패 시
    }

    int inquiry() {
        return mBalance;
    }

    const char* getOwner() {
        return mOwner;
    }
};

int main()
{
    Account a("kitae", 1, 5000);

    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

    return 0;
}