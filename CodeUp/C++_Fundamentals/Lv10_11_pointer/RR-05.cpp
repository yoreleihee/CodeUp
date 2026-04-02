#include <iostream>
using namespace std;

int vect[2][3] = {
};

int main()
{
    for (int i = 0; i < size(vect); ++i) {
        for (int j = 0; j < size(vect[i]); ++j) {
            cin >> vect[i][j];

            if (vect[i][j] == 0) {
                cout << "#";
            }
            else {
                cout << vect[i][j];
            }
        }

        cout << endl;
    }

    return 0;
}