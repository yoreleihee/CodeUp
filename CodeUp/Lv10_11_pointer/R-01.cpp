#include <iostream>
using namespace std;

int vect[4][4] = {0};

int main()
{
    int num = 2;
    for (int j = 0; j < size(vect); j++) {
        for (int i = 0; i < size(vect); i++) {
            vect[i][j] = num;

            num+= 2;
        }
    }

    for (int j = 0; j < size(vect); j++) {
        for (int i = 0; i < size(vect); i++) {
            cout << vect[j][i] << " ";
        }

        cout << endl;
    }

    return 0;
}
