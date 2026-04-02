#include <iostream>
using namespace std;

int num;

void KFC(){
    cin >> num;
}

void BBQ(){
    if (num > 5){
        cout << "만세";
    } else{
        cout << "다시";
    }
}
int main()
{
    KFC();
    BBQ();
    return 0;
}
