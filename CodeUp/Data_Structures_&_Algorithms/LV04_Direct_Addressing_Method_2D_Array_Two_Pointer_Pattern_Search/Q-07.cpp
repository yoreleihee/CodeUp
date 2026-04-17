#include <iostream>
using namespace std;

int map[5][5] = {
        3, 3, 5, 3, 1,
        2, 2, 4, 2, 6,
        4, 9, 2, 3, 4,
        1, 1, 1, 1, 1,
        3, 3, 5, 9, 2,
};

int direct[4][2] = {
        -1, -1, // left up
        -1, 1, // right up
        1, -1, // left down
        1, 1 // right down
};
bool isValidPosition(int y, int x){
    return (y >= 0 && y < 5 && x >= 0 && x < 5);
}
int sum(int y, int x){
    int sum = 0;
    for (int i = 0; i < size(direct); ++i)
    {
        int newY = y + direct[i][0];
        int newX = x + direct[i][1];

        if (!isValidPosition(newY, newX)){
            continue;
        }

        sum += map[newY][newX];
    }
    return sum;
}

int main()
{
    int max = INT_MIN;

    int maxY = 0;
    int maxX = 0;

    for (int i = 0; i < size(map); ++i)
    {
        for (int j = 0; j < size(map[i]); ++j)
        {
            int sumResult = sum(i, j);
            if (max < sumResult){
                max = sumResult;

                maxY = i;
                maxX = j;
            }
        }
    }

    cout << maxY << " " << maxX;
    return 0;
}
