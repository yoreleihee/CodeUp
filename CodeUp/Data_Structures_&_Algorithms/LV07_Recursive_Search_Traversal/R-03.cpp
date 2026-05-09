#include <iostream>
using namespace std;

int main()
{
    char vect[3][3][4] = {};

    char input;
    cin >> input;

    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                vect[i][j][k] = input;
                cout << vect[i][j][k];
            }
            cout << endl;
        }

        input++;
    }

    return 0;
}
