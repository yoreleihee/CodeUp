#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int *p = &a;
    int *t = &b;

    int temp = *p;
    *p = b;
    *t = temp;
    cout << *p << " " << *t;
    return 0;
}
