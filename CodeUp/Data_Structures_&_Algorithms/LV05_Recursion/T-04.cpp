#include <iostream>
using namespace std;

int main() {
    int arrA[4][4] = {};
    int arrB[4][4] = {};

    for (int i = 0; i < size(arrA); ++i)
    {
        for (int j = 0; j < size(arrA[i]); ++j)
        {
            cin >> arrA[i][j];
        }
    }

    for (int i = 0; i < size(arrB); ++i)
    {
        for (int j = 0; j < size(arrB[i]); ++j)
        {
            cin >> arrB[i][j];
        }
    }

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (arrA[i][j] == 0 || arrB[i][j] == 0){
                continue;
            }
            if (arrA[i][j] == arrB[i][j]){
                cout << "걸리다";
                return 0;
            }
        }
    }

    cout << "걸리지않는다";
    return 0;
}
