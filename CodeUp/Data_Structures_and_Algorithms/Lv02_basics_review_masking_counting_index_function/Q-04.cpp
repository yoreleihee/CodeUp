#include <iostream>
using namespace std;

bool isExist(int (*vect)[3], int targetValue) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (targetValue == vect[i][j]) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int vect[3][3] = {
        3, 5, 9,
        4, 2, 1,
        5, 1, 5
    };

    int arr[3];
    for (int i = 0; i < size(arr); ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < size(arr); ++i) {
        cout << arr[i] << ":" << (isExist(vect, arr[i]) ? "존재" : "미발견") << endl;
    }
    return 0;
}
