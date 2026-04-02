#include <iostream>
using namespace std;

int GetLength(char *arr){
    int length = 0;
    while (arr[length] != '\0'){
        length++;
    }

    return length;
}
int main()
{
    char table[2][6];

    for (int i = 0; i < size(table); ++i) {
        for (int j = 0; j < size(table[i]); ++j) {
            table[i][j] = '\0';
        }
    }

    for (int i = 0; i < size(table); ++i) {
        cin >> table[i];
    }

    char arr[12] = {};

    int length1 = GetLength(table[0]);
    int length2 = GetLength(table[1]);

    for (int i = 0; i < length1; ++i)
    {
        arr[i] = table[0][i];
    }

    for (int i = 0; i < length2; ++i)
    {
        arr[length1 + i] = table[1][i];
    }

    for (int i = 0; i < length1 + length2; ++i)
    {
        cout << arr[i];
    }


    return 0;
}
