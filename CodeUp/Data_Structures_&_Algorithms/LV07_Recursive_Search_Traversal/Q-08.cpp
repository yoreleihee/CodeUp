#include <iostream>
using namespace std;

int main()
{
    int vect[3][2][2] = {
            {
                    {2, 4},
                    {1, 5}
            },
            {
                    {2, 3},
                    {3, 6}
            },
            {
                    {7, 3},
                    {1, 5}
            }
    };

    int input;
    cin >> input;

    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < size(vect[input]); ++i)
    {
        for (int j = 0; j < size(vect[input][i]); ++j)
        {
            int temp = vect[input][i][j];
            if (max < temp){
                max = temp;
            }
            if (min > temp){
                min = temp;
            }
        }
    }

    cout << "MAX=" << max << endl;
    cout << "MIN=" << min << endl;
    return 0;
}
