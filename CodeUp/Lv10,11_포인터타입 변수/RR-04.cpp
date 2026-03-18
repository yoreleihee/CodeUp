#include <iostream>
using namespace std;

char vect[3][5] = {
    'a', 'b', 'a', 'c', 'z',
    'c', 't', 'a', 'c', 'd',
    'c', 'c', 'c', 'c', 'a'
};

int main()
{
    char input;
    cin >> input;

    int count = 0;
    for (int i = 0; i < size(vect); ++i) {
        for (int j = 0; j < size(vect[i]); ++j) {
            if (vect[i][j] == input) {
                count++;
            }
        }
    }


    if (count >= 7) {
        cout << "세상에";
    }
    else if (count >= 5) {
        cout << "와우";
    }
    else if (count >= 3) {
        cout << "이야";
    }
    else {
        cout << "이런";
    }

    return 0;
}