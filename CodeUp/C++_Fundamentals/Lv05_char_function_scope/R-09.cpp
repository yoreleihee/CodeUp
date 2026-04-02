#include <iostream>
using namespace std;

int arr[5];

int main()
{
    int a, b;
    cin >> a >> b;

    arr[0] = a;
    for (int i = 1; i < size(arr); ++i)
    {
        arr[i] = arr[i - 1] + b;
    }

    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
