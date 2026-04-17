#include <iostream>
using namespace std;
int win[2][3] = {
        3, 5, 1,
        4, 2, 6
};

bool isExist(int target){
    for (int i = 0; i < size(win); ++i)
    {
        for (int j = 0; j < size(win[i]); ++j)
        {
            if (target == win[i][j]){
                return true;
            }
        }
    }

    return false;
}
int main() {
    int people[4] = {};

    for (int i = 0; i < size(people); ++i)
    {
        cin >> people[i];
    }

    for (int i = 0; i < size(people); ++i)
    {
        if (isExist(people[i])){
            cout << people[i] << "번 합격" << endl;
        } else{
            cout << people[i] << "번 불합격" << endl;
        }
    }
    return 0;
}
