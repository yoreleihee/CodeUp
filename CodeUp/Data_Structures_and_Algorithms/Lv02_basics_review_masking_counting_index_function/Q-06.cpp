#include <iostream>
using namespace std;

void Mask(int (*mask)[5], int (*arr)[5], int (*result)[5]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (mask[i][j] == 1) {
                result[i][j] = arr[i][j];
            }
        }
    }
}

bool isExist(int (*arr)[5], int target) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int mask[2][5] = {
        0, 0, 1, 0, 0,
        0, 0, 1, 1, 1
    };
    int vect[2][5] = {
        3, 5, 4, 1, 1,
        3, 5, 2, 5, 6
    };

    int input;
    cin >> input;

    int result[2][5] = {};
    Mask(mask, vect, result);
    bool exist = isExist(result, input);

    cout << input << " " << (exist ? "존재" : "없음");
    return 0;
}
