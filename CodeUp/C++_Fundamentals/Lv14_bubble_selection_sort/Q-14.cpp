#include <iostream>
using namespace std;

int main()
{
    char table[2][9];

    cin >> table[0] >> table[1];

    int count = 0;
    for (int i = 0; i < 9; ++i)
    {
        if (table[0][i] != table[1][i]
        && table[0][i] != '\0'
        && table[1][i] != '\0'){
            count++;
        }
    }

    cout << count;
    return 0;
}
