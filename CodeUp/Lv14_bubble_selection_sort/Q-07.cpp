#include <iostream>
using namespace std;

void Magic(int (*pArr2D)[3]) {
    int num = 1;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0 + i; j < 3; ++j) {
            pArr2D[i][j] = num++;
        }
    }
}
int main()
{
    int vect[3][3] = {0};

    Magic(vect);

    for (int i = 0; i < size(vect); ++i) {
        for (int j = 0; j < size(vect[i]); ++j) {
            if (vect[i][j] == 0) {
                cout << " ";
            }
            else {
                cout << vect[i][j];
            }
        }

        cout << endl;
    }

    return 0;
}
