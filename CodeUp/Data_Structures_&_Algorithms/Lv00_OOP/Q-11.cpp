#include <iostream>
using namespace std;

class BankAccount{
    int mBalance;
    int mAccount;
    char* pBank;
    char* pType;

public:

    int GetBalance() { return mBalance; }
    int GetAccount() { return mAccount; }
    char* GetBank() { return pBank; }
    char* GetType() { return pType; }

    BankAccount(int balance, int account, char* bank, char* type){
        mBalance = balance;
        mAccount = account;
        pBank = bank;
        pType = type;
    }

    void Deposit(int money){
        cout << "Balance: $" << mBalance
             << " → Deposit $" << money
             << " → Balance: $" << mBalance + money << endl;

        mBalance += money;
    }
};

class Customer{
    char* pName;
    char* pPhone;
    char* pAddress;
    int mAge;
    BankAccount mBankAccount;

public:
    BankAccount GetBankAccount() {return mBankAccount;}

    Customer(char *name, char *phone, char *address, int age, BankAccount bankAccount)
            : pName(name), pPhone(phone), pAddress(address),
              mAge(age), mBankAccount(bankAccount)
    {
    }

    void PrintInfo() {
        cout << "Customer: " << pName
             << " | Phone: " << pPhone
             << " | Age: " << mAge << endl;

        cout << "Account: " << mBankAccount.GetAccount()
             << " | Bank: " << mBankAccount.GetBank()
             << " | Type: " << mBankAccount.GetType() << endl;
    }
};
int main() {
    BankAccount acc(1500, 123456, (char*)"Hana", (char*)"Saving");
    Customer c((char*)"Alice", (char*)"010-1234-5678", (char*)"Seoul", 27, acc);

    c.PrintInfo();
    c.GetBankAccount().Deposit(200);
    return 0;
}
