#include <iostream>
using namespace std;

char pattern[] = "GHOST";
char arr[11] = {};

bool isPattern(int startIdx){
    for (int i = 0; i < size(pattern) - 1; ++i)
    {
        if (pattern[i] != pattern[startIdx + i]){
            return false;
        }
    }

    return true;
}
int main() {
    cin >> arr;

    int len = strlen(arr);
    for (int i = 0; i < len; ++i)
    {
        if (isPattern(i)){
            cout << "존재";
            return 0;
        }
    }

    cout << "존재하지 않음";
    return 0;
}
