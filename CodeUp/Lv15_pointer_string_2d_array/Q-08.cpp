#include <iostream>
using namespace std;

int main()
{
    char table[4][7] = {};

    cin >> table[0] >> table[1] >> table[2] >> table[3];

    int arr[4] = {};

    for (int i = 0; i < 4; ++i) {
        arr[i] = strlen(table[i]);
    }

    // for (int i = 0; i < size(arr) - 1; ++i) {
    //     for (int j = 0; j < size(arr) - 1 - i; ++j) {
    //         if (arr[j] > arr[j + 1]) {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }

    for (int i = 0; i < size(arr) - 1; ++i) {
        int minIdx = i;
        for (int j = 1 + i; j < size(arr); ++j) {
            if (arr[minIdx] > arr[j]) {
                minIdx = j;
            }
        }

        swap(arr[minIdx], arr[i]);
    }

    for (int i = 0; i < 4; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
