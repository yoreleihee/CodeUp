#include <iostream>
using namespace std;

int patternYLen, patternXLen;
int vect[4][5] = {
        3, 5, 4, 2, 5,
        3, 3, 3, 2, 1,
        3, 2, 6, 7, 8,
        9, 1, 1, 3, 2
};

bool isValidPosition(int y, int x){
    return (y >= 0 && y < size(vect) && x >= 0 && x < size(vect[0]));
}
int sum(int y, int x){
    int result = 0;
    for (int i = 0; i < patternYLen; ++i)
    {
        for (int j = 0; j < patternXLen; ++j)
        {
            int newY = y +i;
            int newX = x + j;
            if (isValidPosition(newY, newX))
            result += vect[newY][newX];
        }
    }
    return result;
}

int main() {
    cin >> patternYLen >> patternXLen;

    int max = INT_MIN;
    int maxY = 0;
    int maxX = 0;
    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            int result = sum(i, j);

            if (max < result){
                max = result;

                maxY = i;
                maxX= j;
            }
        }
    }

    cout << "(" << maxY << "," << maxX << ")";
    return 0;
}
