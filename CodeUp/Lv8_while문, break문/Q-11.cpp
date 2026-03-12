#include <iostream>
using namespace std;

int input;

void starBox(){
    for (int i = 1; i < 20; i+= 2)
    {
        cout << i << " ";
    }
}

void macDoll(){
    for (int i = 'H'; i >= 'A'; --i)
    {
        cout << (char)i << " ";
    }
}

void copyBean(){
    for (int i = -5; i <= 5; ++i)
    {
        cout << i << " ";
    }
}
int main()
{
    cin >> input;

    if (3500 <= input && input <= 5000){
        starBox();
    }
    else if (2500 <= input && input <= 3500){
        macDoll();
    } else{
        copyBean();
    }
    return 0;
}
