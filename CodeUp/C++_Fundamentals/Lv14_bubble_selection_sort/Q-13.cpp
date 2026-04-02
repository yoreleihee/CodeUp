#include <iostream>
using namespace std;

int main()
{
    char a, b;
    cin >> a >> b;

    char *pA = &a;
    char *pB = &b;

    char temp = *pA;
    *pA = *pB;
    *pB = temp;
    cout << a << " " << b;
    return 0;
}
