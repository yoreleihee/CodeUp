#include <iostream>
using namespace std;

int num;
int table[4][4] = {0};
int main()
{
    cin >> num;

    if (num % 2 == 0){
        // (0,0) (1, 1) (2, 2) (3, 3)

        for (int i = 0; i < 4; ++i)
        {
            table[i][i] = i + 1;
        }
    }
    else {
        // (3, 0) (2, 1)(1, 2)(0, 3)

        int y = 0;
        int x = 3;
        for (int i = 0; i < 4; ++i)
        {
            table[y][x] = i + 1;
            y++;
            x--;
        }
    }

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
