#include <iostream>
using namespace std;

void KFC(){
    cout << "KFC";
}

void BBQ(){
    cout << "BBQ";
}

int main()
{
    char c;
    cin >> c;

    if (c == 'B'){
        KFC();
        cout << endl;
        BBQ();
    }
    else if (c == 'b'){
        BBQ();
    }
    else if (c == '7'){
        KFC();
    }
    return 0;
}
