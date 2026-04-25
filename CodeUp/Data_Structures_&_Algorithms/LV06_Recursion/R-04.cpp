#include <iostream>
using namespace std;

int main() {
    char vect[4][4] = {};

    for (int i = 0; i < size(vect); ++i)
    {
        cin >> vect[i];
    }

    char result[4][4] = {};

    for (int i = 0; i < size(result); ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            result[i][j] = '_';
        }
    }

    int y = 3;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = size(vect) - 1; j >= 0; --j)
        {
            char ch = vect[j][i];
            if ('A' <= ch && ch <= 'Z'){
                result[y][i] = vect[j][i];
                y--;
            }
        }
        y = 3;
    }

    for (int i = 0; i < size(result); ++i)
    {
        int len = strlen(result[i]);
        for (int j = 0; j < len; ++j)
        {
            cout << result[i][j];
        }
        cout << endl;
    }
    return 0;
}
