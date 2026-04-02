#include <iostream>
using namespace std;

int main()
{
    char table[2][7] = {};

    cin >> table[0] >> table[1];

    if (strcmp(table[0], table[1]) == 0) {
        cout << "같음";
    }
    else {
        cout << "다름";
    }
    return 0;
}
