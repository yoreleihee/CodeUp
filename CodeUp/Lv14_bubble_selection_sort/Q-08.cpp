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
    char table[3][10];

    for (int i = 0; i < size(table); ++i) {
        for (int j = 0; j < size(table[i]); ++j) {
            table[i][j] = '\0';
        }
    }

    for (int i = 0; i < size(table); ++i) {
        cin >> table[i];
    }

    for (int i = 0; i < size(table); ++i) {
        CountLine(table[i]);
        cout << endl;
    }

    return 0;
}
