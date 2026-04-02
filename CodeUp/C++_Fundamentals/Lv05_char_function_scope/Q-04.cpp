#include <iostream>
using namespace std;

void KFC(){
    cout << "KFC입니다";
}

void MC(){
    cout << "MC입니다";
}

int main()
{
    int num;
    cin >> num;

    if (num == 1){
        KFC();
    }
    else if (num == 2){
        MC();
    }
    return 0;
}
