#include <iostream>
using namespace std;

int image[4][4] = {};

bool isValidPosition(int y, int x){
    return (y >= 0 && y < size(image) && x >= 0 && x < size(image[0]));
}

int rectSum(int y, int x){
    int sum = 0;

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            int newY = y + i;
            int newX = x + j;

            if (!isValidPosition(newY, newX)){
                continue;
            }

            sum += image[newY][newX];
        }
    }

    return sum;
}

int main()
{
    for (int i = 0; i < size(image); ++i)
    {
        for (int j = 0; j < size(image[i]); ++j)
        {
            cin >> image[i][j];
        }
    }

    int max = INT_MIN;
    int maxY = 0;
    int maxX = 0;

    for (int i = 0; i < size(image); ++i)
    {
        for (int j = 0; j < size(image[i]); ++j)
        {
            int sum = rectSum(i, j);
            if (max < sum){
                max = sum;

                maxY = i;
                maxX = j;
            }
        }
    }

    cout << "(" << maxY << "," << maxX << ")";
    return 0;
}
