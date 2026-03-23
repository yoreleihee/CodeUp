#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int result = 0;
    if (a > b){
        result = a - b;
    }
    else{
        result = b - a;
    }

    if (result % 2 == 1){
        cout << "고백한다";
    } else{
        cout << "짝사랑만";
    }

    return 0;
}
