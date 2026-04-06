#include <iostream>
using namespace std;

int GetSum(int (*vect)[3], int (*mask)[3]) {
    int result = 0;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (mask[i][j] == 1) {
                result += vect[i][j];
            }
        }
    }

    return result;
}

int main() {
    int vect[3][3] = {
        3, 5, 9,
        4, 2, 1,
        1, 1, 5
    };

    int mask[3][3] = {};

    for (int i = 0; i < size(mask); ++i) {
        for (int j = 0; j < size(mask[i]); ++j) {
            cin >> mask[i][j];
        }
    }

    cout << GetSum(vect, mask);

    return 0;
}
