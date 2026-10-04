#include <iostream>
using namespace std;


int main()
{
    int arr[6] = {};

    for (int i = 0; i < size(arr); ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < size(arr) - 1; ++i) {
        arr[i + 1] = arr[i] + arr[i + 1];
    }

    for (int i = 0; i < size(arr); ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}