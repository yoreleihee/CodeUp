#include <iostream>
using namespace std;

char findChar(char* str) {
    int len = strlen(str);
    return str[len - 1];
}

int main()
{
    char table[3][10] = {};

    for (int i = 0; i < size(table); ++i) {
        cin >> table[i];
    }

    for (int i = 0; i < size(table); ++i) {
        cout << findChar(table[i]);
    }

    return 0;
}
