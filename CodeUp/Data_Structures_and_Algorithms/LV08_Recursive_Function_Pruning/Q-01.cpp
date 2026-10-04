#include <iostream>
using namespace std;

char names[5] = "ATKP";
int visited[4] = {};
char path[4] = {};

void recursive(int level){
    if (level == 3){
        cout << path << endl;
        return;
    }

    for (int i = 0; i < 4; ++i)
    {
        if (visited[i] == 1){
            continue;
        }

        path[level] = names[i];
        visited[i] = 1;
        recursive(level + 1);
        path[level] = 0;
        visited[i] = 0;
    }
}
int main()
{
    recursive(0);
    return 0;
}
