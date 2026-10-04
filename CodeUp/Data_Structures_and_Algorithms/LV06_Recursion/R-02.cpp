#include <iostream>
using namespace std;

int main() {
    int vect[3][4] = {
            3, 4,1, 5,
            3, 4, 1, 3,
            5, 2, 3, 6
    };

    int sum[4] = {};
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            sum[i] += vect[j][i];
        }
    }

    int idx;
    cin >> idx;

    cout << sum[idx];
    return 0;
}
