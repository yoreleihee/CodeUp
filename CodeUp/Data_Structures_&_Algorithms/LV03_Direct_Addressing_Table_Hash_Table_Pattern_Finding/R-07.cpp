#include <iostream>
using namespace std;

char vect[] = "CODING";

bool isExist(int target){
    int len = strlen(vect);
    for (int i = 0; i < len; ++i)
    {
        if (target == vect[i]){
            return true;
        }
    }

    return false;
}
int main() {
    int runCount;
    cin >> runCount;

    for (int i = 0; i < runCount; ++i)
    {
        char input;
        cin >> input;

        cout << (isExist(input) ? "O" : "X");
    }

    return 0;
}
