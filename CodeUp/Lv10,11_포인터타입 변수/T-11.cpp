#include <iostream>
using namespace std;

int vect[4][4] = {
    1, 3, 6, 2,
    4, 2, 4, 5,
    6, 3, 7, 3,
    1, 5, 4, 6
};

int main()
{
    int input;
    cin >> input;

    int select[16] = {0};
    int selectIndex = 0;
    for (int i = 0; i < size(vect); ++i) {
        for (int j = 0; j < size(vect[i]); ++j) {
            if (input < vect[i][j]) {
                select[selectIndex] = vect[i][j];
                selectIndex++;
            }
        }
    }

    for (int i = 0; i < selectIndex; ++i) {
        cout << select[i] << " ";
    }
    return 0;
}
