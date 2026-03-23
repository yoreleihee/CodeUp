#include <iostream>
using namespace std;

int arr[6] = {0};

int main()
{
    int a, b;
    cin >> a >> b;

    int t = a;

    for (int i = 0; i < b - a + 1; ++i)
    {
        arr[i] = t++;
    }

    for (int i = 0; i < b - a + 1; ++i)
    {
        cout << arr[i];
    }
    return 0;
}
