#include <iostream>
using namespace std;

int main() {
    int input[4][2] = {};
    int vect[4][3] = {};

    for (int i = 0; i < size(input); ++i)
    {
        for (int j = 0; j < size(input[i]); ++j)
        {
            cin >> input[i][j];
        }
    }

    for (int i = 0; i < size(input); ++i)
    {
        int y = input[i][0];
        int x = input[i][1];

        vect[y][x] = 5;
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
