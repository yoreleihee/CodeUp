#include <iostream>
using namespace std;

int vect[5][5] = {0};

int main()
{
    int num = 1;
    for (int j = 4; j >= 0; j--) {
        for (int i = 0; i < size(vect); i++) {
            vect[i][j] = num++;
        }
    }

    int input;
    cin >> input;

    for (int i = 0; i < 5; i++) {
        vect[input][i] = input;
    }

    for (int j = 0; j < size(vect); j++) {
        for (int i = 0; i < size(vect); i++) {
            cout << vect[j][i] << " ";
        }

        cout << endl;
    }

    return 0;
}
