#include <iostream>
using namespace std;

int main()
{
    char input;
    cin >> input;

    char table[3][3] = {};

    for (int j = 0; j < size(table); ++j)
    {
        for (int k = 0; k < size(table[j]); ++k)
        {
            table[j][k] = ' ';
        }
    }

    int i = 2;
    while (i >= 0){
        int j = 0;
        while (j < size(table[i]) - i){
            table[i][j] = input++;
            j++;
        }
        i--;
    }

    for (int j = 0; j < size(table); ++j)
    {
        for (int k = 0; k < size(table[j]); ++k)
        {
            cout << table[j][k];
        }

        cout << endl;
    }

    return 0;
}
