#include <iostream>
using namespace std;

void Mask(int (*arr1)[4], int (*arr2)[4]) {
    int result[4][4] = {};
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            result[i][j] = arr1[i][j] | arr2[i][j];

            if (result[i][j] == 0) {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}
int main() {
    int vect1[4][4] = {
        0, 0, 0, 1,
        1, 1, 0, 1,
        1, 0, 0, 1,
        1, 1, 1, 1
    };

    int vect2[4][4]= {
        1, 1, 1, 1,
        1, 0, 1, 1,
        1, 0, 0, 0,
        1, 0, 0, 0
    };

    Mask(vect1, vect2);
    return 0;
}
