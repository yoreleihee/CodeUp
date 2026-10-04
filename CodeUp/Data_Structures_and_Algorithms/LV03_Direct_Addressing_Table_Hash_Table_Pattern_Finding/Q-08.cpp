#include <iostream>
using namespace std;

int apart[5][3] = {
        15, 18, 17,
        4, 6, 9,
        10, 1, 3,
        7, 8, 9,
        15, 2, 6
};

int family[3] = {};

bool isPattern(int startIdx){
    for (int i = 0; i < 3; ++i)
    {
        if (family[i] != apart[startIdx][i]){
            return false;
        }
    }

    return true;
}
int main() {

    for (int i = 0; i < size(family); ++i)
    {
        cin >> family[i];
    }
    for (int i = 0; i < size(apart); ++i)
    {
        if (isPattern(i)){
            cout << 5 - i << "층";
        }
    }
    return 0;
}
