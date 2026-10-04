#include <iostream>
using namespace std;

void isExist(int *arr, int *univer) {
    for (int i = 0; i < 2; ++i) {
        bool isExist = false;
        for (int j = 0; j < 6; ++j) {
            if (univer[i] == arr[j]) {
                isExist = true;
                break;
            }
        }

        cout << (isExist ? "OK" : "NO") << " ";
    }
}
int main() {
    int arr[] = {3, 7, 4, 1, 2, 6};

    int univer[2][2] = {};

    for (int i = 0; i < size(univer); ++i) {
        for (int j = 0; j < size(univer[i]); ++j) {
            cin >> univer[i][j];
        }
    }

    for (int i = 0; i < size(univer); ++i) {
        isExist(arr, univer[i]);
        cout << endl;
    }

    return 0;
}
