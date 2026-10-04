#include <iostream>
using namespace std;

int main()
{
    char arr[11] = {};
    cin >> arr;

    int maxIdx = 1;
    int minIdx = 1;
    int len = strlen(arr);
    for (int i = 0; i < len; ++i) {
        if (arr[i] > arr[maxIdx]) {
            maxIdx = i;
        }

        if (arr[i] < arr[minIdx]) {
            minIdx = i;
        }
    }

    cout << maxIdx << endl;
    cout << minIdx << endl;
    return 0;
}