#include <iostream>
using namespace std;

int bitarry[2][2] = {};
int map[3][3] = {
        3, 5, 1,
        3, 8, 1,
        1, 1, 5
};

bool isValidPosition(int y, int x){
    return (y >=0 && y < size(map) && x >= 0 && x < size(map[0]));
}
int sum(int y, int x){
    int sum = 0;
    for (int i = 0; i < size(bitarry); ++i)
    {
        for (int j = 0; j < size(bitarry[i]); ++j)
        {
            if (bitarry[i][j] != 1){
                continue;
            }
            int newY = y + i;
            int newX = x + j;
            if (!isValidPosition(newY, newX)){
                continue;
            }

            sum += map[newY][newX];
        }
    }
    return sum;
}

int main()
{
    for (int i = 0; i < size(bitarry); ++i)
    {
        for (int j = 0; j < size(bitarry[i]); ++j)
        {
            cin >> bitarry[i][j];
        }
    }

    int max = INT_MIN;
    int maxY = 0;
    int maxX = 0;
    for (int i = 0; i < size(map); ++i)
    {
        for (int j = 0; j < size(map[i]); ++j)
        {
            int result = sum(i, j);
            if (max < result){
                max = result;
                maxY = i;
                maxX = j;
            }
        }
    }

    cout << "(" << maxY << "," << maxX << ")";
    return 0;
}
