#include <iostream>
using namespace std;

int arr[6];

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = 0; i < 3; ++i)
    {
        arr[i] = a++;
    }

    for (int i = 5; i >= 3; --i)
    {
        arr[i] = b--;
    }

    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
