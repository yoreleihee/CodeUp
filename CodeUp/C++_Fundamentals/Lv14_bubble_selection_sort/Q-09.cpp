#include <iostream>
using namespace std;

void CountLine(char *arr) {
    int length = 0;

    int i = 0;
    while (arr[i] != '\0') {
        length++;
        i++;
    }

    cout << length << "=";
    i = 0;
    while (arr[i] != '\0') {
        cout << arr[i];
        i++;
    }
}

int main()
{
    char table[4][5];

    for (int i = 0; i < size(table); ++i) {
        for (int j = 0; j < size(table[i]); ++j) {
            table[i][j] = '\0';
        }
    }

    for (int i = 0; i < size(table); ++i) {
        cin >> table[i];
    }

    int aFlag = 0;
    int bFlag = 0;
    for (int i = 0; i < size(table); ++i) {
        for (int j = 0; j < size(table[i]); ++j) {
            if (table[i][j] == 'A') {
                aFlag = 1;
            }
            else if (table[i][j] == 'B') {
                bFlag = 1;
            }
        }
    }

    if (aFlag == 1 && bFlag == 1) {
        cout << "대발견";
    }
    else if (aFlag == 1 || bFlag == 1) {
        cout << "중발견";
    }
    else {
        cout << "미발견";
    }
    return 0;
}
