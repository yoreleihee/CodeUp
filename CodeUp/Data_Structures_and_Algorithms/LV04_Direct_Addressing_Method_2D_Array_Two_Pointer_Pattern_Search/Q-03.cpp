#include <iostream>
using namespace std;

struct MC{
    char mBurger1[9];
    char mBurger2[9];

    void Input(){
        cin >> mBurger1 >> mBurger2;
    }

    void PrintLengthBurgers(){
        cout << "bob.burger1=" << strlen(mBurger1) << endl;
        cout << "bob.burger2=" << strlen(mBurger2) << endl;
    }
};

int main() {
    MC bob, tom;

    bob.Input();
    tom.Input();

    bob.PrintLengthBurgers();
    tom.PrintLengthBurgers();

    return 0;
}
