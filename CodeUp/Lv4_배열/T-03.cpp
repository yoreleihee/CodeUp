#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {};

    int num;
    cin >> num;

    for (int i = 0; i < size(arr); ++i)
    {
        arr[i] = num;

        cout << arr[i];
    }
    return 0;
}
