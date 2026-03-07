#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    int x = 1;
    for (int i = 0; i < num; ++i)
    {
        cout << x << " ";
        x += 2;
    }

    return 0;
}