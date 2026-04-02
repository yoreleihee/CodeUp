#include <iostream>
using namespace std;

int table[4][4] = {0};
int main()
{
    int num = 1;

    for (int j = 3; j >= 0; --j)
    {
        for (int i = 0; i < 4; ++i)
        {
            table[i][j] = num++;
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
