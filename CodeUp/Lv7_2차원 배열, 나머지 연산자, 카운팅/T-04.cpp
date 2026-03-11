#include <iostream>
using namespace std;

char table[3][5];
char c;

int main()
{
    cin >> c;

    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            table[i][j] = c++;
        }
    }

    cout << (char)(table[2][2] + 'a' - 'A');
    return 0;
}
