#include <iostream>
using namespace std;

int train[] = {3, 7, 6, 4, 2, 9, 1, 7};

int team[3] = {};

bool isPattern(int startIdx){
    for (int i = 0; i < 3; ++i)
    {
        if (team[i] != train[startIdx + i]){
            return false;
        }
    }

    return true;
}
int main() {

    for (int i = 0; i < size(team); ++i)
    {
        cin >> team[i];
    }

    for (int i = 0; i < size(train); ++i)
    {
        if (isPattern(i)){
            cout << i << "번~" << i + size(team) - 1 << "번 칸";
        }
    }
    return 0;
}
