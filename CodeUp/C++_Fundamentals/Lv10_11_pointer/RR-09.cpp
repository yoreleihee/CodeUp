#include <iostream>
using namespace std;

int vect[3][3] = {
    3, 1, 6,
    7, 8, 4,
    9, 2, 3
};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    vect[a][b] = c;

    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < size(vect); ++i) {
        for (int j = 0; j < size(vect[i]); ++j) {
            if (max < vect[i][j]) {
                max = vect[i][j];
            }
            if (min > vect[i][j]) {
                min = vect[i][j];
            }
        }
    }

    int sum = max + min;
    cout << sum;

    return 0;
}