#include <iostream>
using namespace std;

char names[4] = "ABC";
char path[5] = {};
int n = 0;
int totalCount = 0;

bool isConsecutive(int idx){
    if (idx < 2)
    {
        return false;
    }
    char ch = path[idx];
    for (int i = idx - 1; i >= idx - 2; --i)
    {
        if (ch != path[i]){
            return false;
        }
    }

    return true;
}
void recursive(int level){
    if (level == n){
        totalCount++;
        return;
    }

    for (int i = 0; i < 3; ++i)
    {
        path[level] = names[i];

        if (isConsecutive(level)){
            continue;
        }
        recursive(level + 1);
        path[level] = 0;
    }
}

int main()
{
    cin >> n;
    recursive(0);
    cout << totalCount;

    return 0;
}
