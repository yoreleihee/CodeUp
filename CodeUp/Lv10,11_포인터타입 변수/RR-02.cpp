#include <iostream>
using namespace std;

int vect[3][3] = {
    1, 1, 1,
    1, 2, 1,
    3, 6, 3
};

int Count(int num) {
    int count = 0;
    for (int i = 0; i < size(vect); ++i) {
        for (int j = 0; j < size(vect[i]); ++j) {
            if (vect[i][j] == num) {
                count++;
            }
        }
    }

    return count;
}
int main()
{
    int input;
    cin >> input;

    cout << Count(input);

    return 0;
}