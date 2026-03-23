#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    for (int i = 0; i < 4; ++i)
    {
        if (a > b){
            cout << a;
        }
        else if (a < b){
            cout << b;
        }
    }
}