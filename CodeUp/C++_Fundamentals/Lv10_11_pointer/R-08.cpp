#include <iostream>
using namespace std;

char vect[3][5] = {
    'D', 'A', 'C', 'C', 'D',
    'S', 'D', 'F', 'A', 'E',
    'E', 'E', 'T', 'J', 'H'
};

int CHECK(char ch) {
    for (int i = 0; i < size(vect); ++i) {
        for (int j = 0; j < size(vect[i]); ++j) {
            if (vect[i][j] == ch) {
                return 1;
            }
        }
    }

    return 0;
}

int INPUT() {
    char input;
    cin >> input;

    int flag = CHECK(input);

    if (flag == 0) {
        cout << "없음";
    }
    else {
        cout << "있음";
    }
}

int main()
{
    INPUT();

    return 0;
}
