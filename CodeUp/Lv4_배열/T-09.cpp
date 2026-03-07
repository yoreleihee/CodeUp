#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {};

    int a, b;
    cin >> a >> b;

    arr[0] = a;
    arr[2] = b;

    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i];
    }
    return 0;
}
