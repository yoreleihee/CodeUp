#include <iostream>
using namespace std;

char vect[3][3] = {
    'a', 'b', 'd',
    'e', 'w', 'z',
    'q', 'v', 'a'
};

char Input() {
    char input;
    cin >> input;
    return input;
}

void Process(char ch) {
    ch += 32;

    int flag = 0;
    for (int i = 0; i < size(vect); ++i) {
        for (int j = 0; j < size(vect[i]); ++j) {
            if (ch == vect[i][j]) {
                flag = 1;
            }
        }
    }

    if (flag == 0) {
        cout << "없음";
    }
    else {
        cout << "존재";
    }
}
int main()
{
    char ch = Input();
    Process(ch);

    return 0;
}