#include <iostream>
using namespace std;

int table[3][3] = {0};
int y, x, value;

int main()
{
    cin >> y >> x >> value;
    table[y][x] = value;

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
