#include <iostream>
using namespace std;

int table[6][3] = {0};
int a, b;

int main()
{
    cin >> a>> b;

    for (int i = 0; i < (size(table) / 2); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            table[i][j] = a;
        }
    }

    for (int i = size(table) / 2; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            table[i][j] = b;
        }
    }

    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            cout << table[i][j];
        }

        cout << endl;
    }

    return 0;
}
