#include <iostream>
using namespace std;

int GetTargetOffset(int* arr, int baseIndex, int targetValue) {
    int offset = 0;
    int i = baseIndex;
    while (i < 7 && targetValue != arr[i]) {
        offset++;
        i++;
    }
    return offset;
}
int main() {
    int arr[] = {5, 9, 4, 6, 1, 5, 8};

    int baseIndex, targetValue;
    cin >> baseIndex >> targetValue;

    cout << GetTargetOffset(arr, baseIndex, targetValue);

    return 0;
}
