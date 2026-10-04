#include <iostream>
using namespace std;

int main() {
    int vect[3][3] = {
            3, 1, 9,
            7, 2, 1,
            1, 0, 8
    };

    int mask[3][3] = {
            1, 1, 1,
            1, 0, 0,
            1, 0, 0
    };

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (mask[i][j] == 0){
                vect[i][j] = 0;
            }

            if (3 <= vect[i][j] && vect[i][j] <= 5){
                cout << "발견";
                return 0;
            }
        }
    }

    cout << "미발견";



    return 0;
}
