#include <iostream>

using namespace std;

int main()
{
    int a, x;

    cin >> a >> x;

    for (int i = 0; i < x ; ++i)
    {
        cout << --a << " ";
    }

    return 0;
}