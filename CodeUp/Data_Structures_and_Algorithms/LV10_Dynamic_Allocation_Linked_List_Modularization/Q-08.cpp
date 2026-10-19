#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int a = (num / 1000) % 10;
    int b = (num / 10) % 10;
    int result = a * 10 + b + 5;
    cout << result;
    return 0;
}