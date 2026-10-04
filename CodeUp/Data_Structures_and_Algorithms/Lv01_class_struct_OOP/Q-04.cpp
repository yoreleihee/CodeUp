#include <iostream>
using namespace std;

void Input(int* arr, int len) {
    for (int i = 0; i < len; ++i) {
        cin >> arr[i];
    }
}
int main()
{
    int arrA[4] = {};
    int arrB[4] = {};

    Input(arrA, size(arrA));
    Input(arrB, size(arrB));

    int result[4] = {};
    int len = size(arrA);
    for (int i = 0; i < len; ++i) {
        result[i] = arrA[i] + arrB[(len - 1) - i];

        cout << result[i] << " ";
    }


    return 0;
}
