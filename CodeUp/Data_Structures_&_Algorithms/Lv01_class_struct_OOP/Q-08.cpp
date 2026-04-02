#include <iostream>
using namespace std;

bool isExist(char (*arr)[4], char target) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < strlen(arr[i]); ++j) {
            if (target == arr[i][j]) {
                return true;
            }
        }
    }

    return false;
}
int main()
{
    char table[2][4] = {
        "GKT",
        "PAC"
    };
    
    char a, b;
    cin >> a >> b;

    bool isExistA = isExist(table, a);
    bool isExistB = isExist(table, b);

    if (isExistA && isExistB) {
        cout << "대발견";
    }
    else if (isExistA || isExistB) {
        cout << "중발견";
    }
    else {
        cout << "미발견";
    }


    return 0;
}