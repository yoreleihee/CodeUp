#include <iostream>
using namespace std;

int input;
int table[3][3] = {0};
int main()
{
    cin >> input;

    int num = 1;
    if (input % 5 == 1){

        for (int j = 2; j >= 0; --j)
        {
            for (int i = 2; i >= 0; --i)
            {
                table[i][j] = num++;
            }
        }

    }
    else if (input % 5 == 2) {
        for (int j = 2; j >= 0; --j)
        {
            for (int i = 0; i < 3; ++i)
            {
                table[j][i] = num++;
            }
        }
    } else{
        num = 10;
        for (int j = 0; j < 3; ++j)
        {
            for (int i = 0; i < 3; ++i)
            {
                table[i][j] = num++;
            }
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
