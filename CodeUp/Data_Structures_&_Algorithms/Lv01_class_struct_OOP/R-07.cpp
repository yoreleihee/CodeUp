#include <iostream>
using namespace std;

int main()
{
    int table[7][4] = {};

    int num = 1;
    for (int i = 0; i < size(table); ++i) {
        for (int j = 0; j < size(table[i]); ++j) {
            table[i][j] = num++;
        }
    }

    int arr[3] = {};

    for (int i = 0; i < size(arr); ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < size(arr); ++i) {
        for (int j = 0; j < size(table[i]); ++j) {
            int y = arr[i];
            table[y][j] = 0;
        }
    }

    for (int i = 0; i < size(table); ++i) {
        for (int j = 0; j < size(table[i]); ++j) {
            cout << table[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}