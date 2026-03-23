#include <iostream>
using namespace std;

int table[3][4] = {0};
int main()
{
    int num = 1;

    for (int j = 2; j >= 0; --j)
    {
        for (int i = 3; i >= 0; --i)
        {
            table[j][i] = num++;
        }
    }

    int input;
    cin >> input;

    for (int i = 0; i < size(table); ++i)
    {
        table[i][input] = 0;
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
