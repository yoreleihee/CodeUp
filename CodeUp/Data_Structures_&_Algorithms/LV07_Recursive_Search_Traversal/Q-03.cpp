#include <iostream>
using namespace std;

char path[3] = {};
char names[] = "BGTK";
int maxLevel = 0;

void recursive(int level){
    if (level == maxLevel){
        cout << path << endl;
        return;
    }

    for (int i = 0; i < 4; ++i)
    {
        path[level] = names[i];
        recursive(level + 1);
        path[level] = 0;
    }
}

int main()
{
    cin >> maxLevel;
    recursive(0);
    return 0;
}
