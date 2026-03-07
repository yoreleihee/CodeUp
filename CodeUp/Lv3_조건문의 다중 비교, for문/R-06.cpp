#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int x = a * b;
    if (30 < x && x < 50){
        cout << "적당한 사이즈";
    }
    else if (x >= 50){
        cout << "큰 사이즈";
    }
    else if (x <= 30){
        cout << "작은 사이즈";
    }

    return 0;
}