#include <iostream>
using namespace std;

int main()
{
    char table[2][11] = {};

    cin >> table[0] >> table[1];

    int len1 = strlen(table[0]);
    int len2 = strlen(table[1]);
    for (int i = 0; i < len1 && i < len2; ++i) {
        if (table[0][i] != table[1][len2 - i - 1]) {
            cout << "거울문장아님";
            return 0;
        }
    }

    cout << "거울문장";
    return 0;
}
