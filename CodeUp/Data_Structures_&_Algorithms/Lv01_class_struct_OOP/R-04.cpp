#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {};

    cin >> arr[0] >> arr[1];

    for (int i = 0; i < size(arr) - 2; ++i) {
        arr[i + 2] = arr[i] * arr[i + 1];
    }

    cout << arr[size(arr) - 1];
    return 0;
}