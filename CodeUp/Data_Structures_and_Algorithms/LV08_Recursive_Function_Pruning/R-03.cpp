#include <iostream>
using namespace std;

int main()
{
    int vect[4][4] = {};

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> vect[i][j];
        }
    }

    int sum3 = 0;
    for (int i = 0; i < 3; ++i)
    {
        int sum1 = 0;
        int sum2 = 0;
        for (int j = 0; j < 3; ++j)
        {
            sum1 += vect[i][j];
            sum2 += vect[j][i];
        }

        sum3 += vect[i][i];
        vect[i][3] = sum1;
        vect[3][i] = sum2;
    }

    vect[3][3] = sum3;

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
