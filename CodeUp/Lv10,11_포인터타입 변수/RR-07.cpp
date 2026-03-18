#include <iostream>
using namespace std;

int main()
{
    char vect[3][3] = {
        'a', 'b', 'E',
        'E', '2', 'W',
        '3', '2', '4'
    };

    for (int i = 0; i < size(vect); ++i) {
        for (int j = 0; j < size(vect[i]); ++j) {
            char ch;
            if ('a' <= vect[i][j] && vect[i][j] <= 'z') {
                ch = vect[i][j] - 32;
            }
            else if ('A' <= vect[i][j] && vect[i][j] <= 'Z') {
                ch = vect[i][j] + 32;
            }
            else if ('0' <= vect[i][j] && vect[i][j] <= '9') {
                ch = (int)vect[i][j] + 5;
            }

            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}