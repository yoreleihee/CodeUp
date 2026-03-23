#include <iostream>
using namespace std;

int table[3][2] = {0};

int main()
{
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            cin >> table[i][j];
            table[i][j] += 2;

            cout << table[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}
