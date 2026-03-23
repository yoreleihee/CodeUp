#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    num += 2;

    for (int i = num; i < num + 3; ++i)
    {
        cout << i << " ";
    }
    return 0;
}