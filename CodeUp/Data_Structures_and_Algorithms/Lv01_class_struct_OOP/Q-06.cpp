#include <iostream>
using namespace std;

void isExist(char (*arr)[11]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < strlen(arr[i]); ++j) {
            if ('M' == arr[i][j]) {
                cout << "M이 존재합니다";
                return;
            }
        }
    }

    cout << "M이 존재하지 않습니다";
}

int main()
{
    char table[3][11] = {};

    for (int i = 0; i < size(table); ++i) {
        cin >> table[i];
    }

    isExist(table);


    return 0;
}
