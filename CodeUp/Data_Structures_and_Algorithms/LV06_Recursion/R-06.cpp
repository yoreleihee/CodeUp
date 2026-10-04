#include <iostream>
using namespace std;

int main() {
    int vect[4][3] = {
            1, 5, 3,
            4, 5, 5,
            3, 3, 5,
            4, 6, 2
    };

    int a, b;
    cin >> a >> b;

    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            if (a <= vect[i][j] && vect[i][j] <= b){
                vect[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            if (vect[i][j] == 0){
                cout << '#' << " ";
            } else{
                cout << vect[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
