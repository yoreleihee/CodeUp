#include <iostream>
using namespace std;

int main()
{
    char a, b, c;
    cin >> a >> b >> c;

    char *p1 = &a;
    char *p2 = &b;
    char *p3 = &c;

    cout << ++(*p1) << " " << ++(*p2) << " " << ++(*p3);
    return 0;
}
