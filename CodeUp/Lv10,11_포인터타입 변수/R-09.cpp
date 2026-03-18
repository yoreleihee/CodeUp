#include <iostream>
using namespace std;

void run(int input) {
    int vect[3][3] = {0};

    if (input < 10) {
        int num = 1;
        for (int i = 0; i < size(vect); ++i) {
            for (int j = 0; j < size(vect[i]); ++j) {
                vect[i][j] = num++;
            }
        }
    }
    else {
        int num = 1;
        for (int i = 0; i < size(vect); ++i) {
            for (int j = size(vect[i]) - 1; j >= 0; --j) {
                vect[i][j] =  num++;
            }
        }
    }

    for (int i = 0; i < size(vect); ++i) {
        for (int j = 0; j < size(vect[i]); ++j) {
            cout << vect[i][j];
        }

        cout << endl;
    }
}

int main()
{
    int input;
    cin >> input;

    run(input);

    return 0;
}