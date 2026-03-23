#include <iostream>
using namespace std;

int table[2][4] = {0};

int main()
{
    int x, y;
    cin >> x >> y;

    table[y][x] = 1;

    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            cout << table[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}
