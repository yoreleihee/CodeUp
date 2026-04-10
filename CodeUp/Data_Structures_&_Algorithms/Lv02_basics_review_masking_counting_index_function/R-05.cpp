#include <iostream>
using namespace std;

int main() {
    int arr[6] = {};
    int mask[] = {1, 0, 1, 0, 1, 0};

    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];

        if (mask[i] != 1){
            arr[i] = 0;
        }
    }

    int minIdx = 0;

    for (int i = 1; i < size(arr); ++i)
    {
        if (arr[i] != 0 && arr[minIdx] > arr[i]){
            minIdx = i;
        }
    }

    cout << "arr[" << minIdx << "]=" << arr[minIdx];

    return 0;
}
