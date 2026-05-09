#include <iostream>
using namespace std;

char names[6] = {};
char path[6] = {};
int cnt = 0;

void recursive(int level){
    if (level > 1 && abs(path[level - 1] - path[level - 2]) > 3){
        return;
    }
    if (level == 4){
        cnt++;
        return;
    }

    for (int i = 0; i < 5; ++i)
    {
        path[level] = names[i];
        recursive(level + 1);
        path[level] = 0;
    }
}

int main()
{
    cin >> names;
    recursive(0);

    cout << cnt;
    return 0;
}
