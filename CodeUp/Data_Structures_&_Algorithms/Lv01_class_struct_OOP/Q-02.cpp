#include <iostream>
using namespace std;

int findCharCount(char (*arr)[5], char targetChar) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        int len = strlen(arr[i]);
        for (int j = 0; j < len; ++j) {
            if (targetChar == arr[i][j]) {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    char table[4][5] = {
        "ABKT",
        "KFCF",
        "BBQQ",
        "TPZF"
    };

    char a, b;
    cin >> a >> b;

    cout << findCharCount(table, a) + findCharCount(table, b);

    return 0;
}
