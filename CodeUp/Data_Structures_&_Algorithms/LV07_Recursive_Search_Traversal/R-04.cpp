#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int vect[3][2][3] = {};
    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            vect[i][0][j] = a;
            vect[i][1][j] = b;
        }
    }

    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                cout << vect[i][j][k];
            }
            cout << endl;
        }
    }

    return 0;
}
