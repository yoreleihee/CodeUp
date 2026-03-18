#include <iostream>
using namespace std;

int vect[7][5] = {
    1, 0, 0, 0, 0,
    1, 0, 1, 0, 0,
    1, 1, 0, 1, 0,
    1, 0, 1, 0, 0,
    0, 1, 0, 0, 1,
    0, 0, 0, 1, 0,
    1, 1, 0, 0, 0,
};

int INPUT() {
    int input;
    cin >> input;

    return input;
}

int PROCESS(int num) {
    int count = 0;

    for (int j = 0; j < size(vect); ++j) {
        if (vect[j][num] == 1) {
            count++;
        }
    }

    return count;
}

void OUTPUT(int num) {
   cout << num;
}
int main()
{
    int num = INPUT();
    int count = PROCESS(num);
    OUTPUT(count);

    return 0;
}
