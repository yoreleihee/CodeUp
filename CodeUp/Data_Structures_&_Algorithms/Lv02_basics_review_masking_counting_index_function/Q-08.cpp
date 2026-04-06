#include <iostream>
using namespace std;

int GetMaxCountValue(int (*vect)[3], int target[3]) {
    int results[3] = {};

    for (int i = 0; i < 3; ++i) {
        for (int y = 0; y < 3; ++y) {
            for (int x = 0; x < 3; ++x) {
                if (target[i] == vect[y][x]) {
                    results[i]++;
                }
            }
        }
    }

    int maxIdx = 0;
    for (int i = 1; i < 3; ++i) {
        if (results[maxIdx] < results[i]) {
            maxIdx = i;
        }
    }

    return target[maxIdx];
}
int main() {
    int vect[3][3]= {
        3, 7, 4,
        2, 2, 4,
        2, 2, 5
    };

    int target[3] = {};
    for (int i = 0; i < size(target); ++i) {
        cin >> target[i];
    }

    cout << GetMaxCountValue(vect, target);

    return 0;
}
