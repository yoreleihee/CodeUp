#include <iostream>
using namespace std;

int main()
{
    int table[2][3] = {
            {3, 1, 1},
            {2, 3, 2}
    };

    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[0]); ++j)
        {
            cout << table[i][j];
        }
    }
    return 0;
}
