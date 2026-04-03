#include <iostream>
using namespace std;

void GetMax(int (*arr)[3], int* y, int* x) {
    int max = INT_MIN;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < size(arr[i]); ++j) {
            if (max < arr[i][j]) {
                max = arr[i][j];
                *y = i;
                *x = j;
            }
        }
    }
}

void GetMin(int (*arr)[3], int* y, int* x) {
    int min = INT_MAX;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < size(arr[i]); ++j) {
            if (min > arr[i][j]) {
                min = arr[i][j];
                *y = i;
                *x = j;
            }
        }
    }
}
int main()
{
    int table[2][3] = {};

    for (int i = 0; i < size(table); ++i) {
        for (int j = 0; j < size(table[i]); ++j) {
            cin >> table[i][j];
        }
    }

    int maxY, maxX;
    GetMax(table, &maxY, &maxX);

    int minY, minX;
    GetMin(table, &minY, &minX);

    cout << "(" << maxY << "," << maxX << ")" << endl;
    cout << "(" << minY << "," << minX << ")" << endl;

    return 0;
}