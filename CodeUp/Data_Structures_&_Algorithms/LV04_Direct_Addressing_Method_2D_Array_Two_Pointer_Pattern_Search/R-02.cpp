#include <iostream>
using namespace std;

int vect[5][4] = {};

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
    return (y >= 0 && y < size(vect) && x >= 0 && x < size(vect[0]));
}
bool isStable(int y, int x){
    for (int i = 0; i < size(direct); ++i)
    {
        int newY = y + direct[i][0];
        int newX = x + direct[i][1];

        if (!isValidPosition(newY, newX)){
            continue;
        }

        if (vect[newY][newX] == 1){
            return false;
        }
    }

    return true;
}
int main()
{
    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            cin >> vect[i][j];
        }
    }

    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            if (vect[i][j] == 1){
                if (!isStable(i, j)){
                    cout << "불안정한 상태";
                    return 0;
                }
            }
        }
    }

    cout << "안정된 상태";

    return 0;
}
