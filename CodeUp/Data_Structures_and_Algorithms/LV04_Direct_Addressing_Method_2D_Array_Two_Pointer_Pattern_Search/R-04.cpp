#include <iostream>
using namespace std;

int main()
{
    int vect[4][4] = {};

    for (int i = 0; i < 3; ++i)
    {
        char ch;
        int line;
        cin >> ch >> line;

        if (ch == 'G') // 가로
        {
            for (int j = 0; j < size(vect[line]); ++j)
            {
                vect[line][j] = 1;
            }
        }
        else // 세로
        {
            for (int j = 0; j < size(vect); ++j)
            {
                vect[j][line] = 1;
            }
        }
    }

    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            cout << vect[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
