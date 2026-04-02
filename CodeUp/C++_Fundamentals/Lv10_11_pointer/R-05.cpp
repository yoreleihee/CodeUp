#include <iostream>
using namespace std;

int vect[6][3] = {0};

int main()
{
    int num = 10;
    for (int j = 0; j < size(vect[0]); j++) {
        for (int i = 0; i < size(vect); i++) {
            vect[i][j] = num++;
        }
    }

    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; ++i) {
        for (int j = 0; j < size(vect[i]); ++j) {
            vect[i][j] = 7;
        }
    }

    for (int j = 0; j < size(vect); j++) {
        for (int i = 0; i < size(vect[j]); i++) {
            cout << vect[j][i] << " ";
        }

        cout << endl;
    }

    return 0;
}
