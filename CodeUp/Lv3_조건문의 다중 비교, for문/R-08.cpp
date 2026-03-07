#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    for (int i = a; i <= b; ++i)
    {
        cout << i << " ";
    }

    cout << endl;

    for (int i = a; i <= c; ++i)
    {
        cout << i << " ";
    }

    return 0;
}