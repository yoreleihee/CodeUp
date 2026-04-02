#include <iostream>
using namespace std;

int input() {
    int input;
    cin >> input;

    return input;
}

void cals(int a, int b, int c) {
    cout << a + b + c;
}
int main()
{
    int a, b, c;
    a = input();
    b = input();
    c = input();

    cals(a, b, c);
    return 0;
}
