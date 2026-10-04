#include <iostream>
using namespace std;

char vect[4][6] = {};

int direct[8][2] = {
        -1, 0, // up
        1, 0, // down
        0, -1, // left
        0, 1, // right

        -1, -1, // left up
        -1, 1, // right up
        1, -1, // left down
        1, 1 // right down
};

bool isValidPosition(int y, int x){
    return (y >= 0 && y < 4 && x >= 0 && x < 5);
}

void bomb(int y, int x){
    for (int i = 0; i < size(direct); ++i)
    {
        int newY = y + direct[i][0];
        int newX = x + direct[i][1];

        if (!isValidPosition(newY, newX)){
            continue;
        }

        vect[newY][newX] = '#';
    }
}
int main()
{
    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            vect[i][j] = '_';
        }
    }

    int y1, x1, y2, x2;

    cin >> y1 >> x1 >> y2 >> x2;

    bomb(y1, x1);
    bomb(y2, x2);

    for (int i = 0; i < size(vect); ++i)
    {
        int len = strlen(vect[i]);
        for (int j = 0; j < len; ++j)
        {
            cout << vect[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}
