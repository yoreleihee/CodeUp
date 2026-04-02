#include <iostream>
using namespace std;

void input(int *arr){
    for (int i = 0; i < 5; ++i)
    {
        cin >> arr[i];
    }
}

int main()
{
    int vect[4][4] = {
            3, 4, 1, 6,
            3, 5, 3, 6,
            0, 0, 0,0,
            5, 4, 6, 0
    };

    for (int i = 0; i < 4; ++i)
    {
        cin >> vect[2][i];
    }

    int min = INT_MAX;
    int max = INT_MIN;

    int minY = -1;
    int minX = -1;
    int maxY = -1;
    int maxX = -1;

    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            if (min > vect[i][j]){
                min = vect[i][j];
                minY = i;
                minX = j;
            }

            if (max < vect[i][j]){
                max = vect[i][j];
                maxY = i;
                maxX = j;
            }
        }
    }

    cout << "MAX=" << max << "(" << maxY << "," << maxX << ")" << endl;
    cout << "MIN=" << min << "(" << minY << "," << minX << ")" << endl;
    return 0;
}
