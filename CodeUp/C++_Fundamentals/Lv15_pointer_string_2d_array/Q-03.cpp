#include <iostream>
using namespace std;

int main()
{
    char table[2][6] = {};

    cin >> table[0] >> table[1];

    // 버블 정렬
    int len1 = strlen(table[0]);
    for (int i = 0; i < len1 - 1; ++i) {
        for (int j = 0; j < len1 - 1 - i; ++j) {
            if (table[0][j] > table[0][j + 1]) {
                swap(table[0][j], table[0][j + 1]);
            }
        }
    }

    // 선택정렬
    int len2 = strlen(table[1]);
    for (int i = 0; i < len2 - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < len2; ++j) {
            if (table[1][minIndex] > table[1][j]) {
                minIndex = j;
            }
        }

        swap(table[1][i], table[1][minIndex]);
    }

    char arr[10] = {};
    memcpy(arr, table[0], sizeof(char) * len1);
    memcpy(arr + len1, table[1], sizeof(char) * len2);

    for (int i = 0; i < strlen(arr); ++i) {
        cout << arr[i];
    }

    return 0;
}
