#include <iostream>
using namespace std;

bool isExist(char (*arr)[7], char target) {
    for (int i = 0; i < 2; ++i) {
        int len = strlen(arr[i]);
        for (int j = 0; j < len; ++j) {
            if (target == arr[i][j]) {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    char table[2][7] = {
        "A79TKQ",
        "MINCOD"
    };

    char a, b;
    cin >> a >> b;

    cout << a << " : " << (isExist(table, a) ? "존재" : "없음") << endl;
    cout << b << " : " << (isExist(table, b) ? "존재" : "없음") << endl;
    return 0;
}