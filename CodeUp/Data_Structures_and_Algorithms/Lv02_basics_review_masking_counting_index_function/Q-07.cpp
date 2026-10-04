#include <iostream>
using namespace std;

int GetTargetCount(char vect[6], char target[4]) {
    int result = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (target[i] == vect[j]) {
                result++;
                break;
            }
        }
    }

    return result;
}
int main() {
    char vect[] = {"BTKIGZ"};

    char target[4] = {};

    for (int i = 0; i < size(target); ++i) {
        cin >> target[i];
    }

    int result = GetTargetCount(vect, target);
    cout << result;
    return 0;
}
