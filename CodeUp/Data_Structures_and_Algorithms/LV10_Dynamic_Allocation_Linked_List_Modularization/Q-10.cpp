#include <iostream>
using namespace std;

string str;

void recursive(int level, int bCount, int fCount){
    if (level == str.length()){
        if (bCount == fCount){
            cout << "짝이 맞음";
        } else{
            cout << "짝이 안맞음";
        }
        return;
    }

    if (bCount < fCount){
        cout << "짝이 안맞음";
        return;
    }

    char c = str[level];
    if (c == 'B'){
        recursive(level + 1, bCount + 1, fCount);
    } else{
        recursive(level + 1, bCount, fCount + 1);
    }
}
int main()
{
    cin >> str;
    recursive(0, 0, 0);
    return 0;
}