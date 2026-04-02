#include <iostream>
using namespace std;

int main()
{
    char table[5][11] = {};

    for (int i = 0; i < size(table); ++i) {
        cin >> table[i];
    }

    int maxIdx = 0;
    for (int i = 1; i < size(table); ++i) {
        if (strlen(table[maxIdx]) < strlen(table[i])) {
            maxIdx = i;
        }
    }

    cout << table[maxIdx];

    return 0;
}
