#include <iostream>
using namespace std;

void KFC(){
    for (int i = 0; i < 10; ++i)
    {
        cout << "#";
    }
}

void MC(){
    for (int i = 0; i < 10; ++i)
    {
        cout << "@";
    }
}

int main()
{
    KFC();
    cout << endl;
    MC();
    return 0;
}
