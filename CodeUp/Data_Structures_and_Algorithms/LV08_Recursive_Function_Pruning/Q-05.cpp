#include <iostream>
using namespace std;

char names[6] = "EWABC";
char path[6] = {};
char excluded = 0;
int visited[5] = {};

void recursive(int level){
    if (level == 4){
        cout << path << endl;
        return;
    }

    for (int i = 0; i < 5; ++i)
    {
        if (visited[i] == 1 || names[i] == excluded){
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
    cin >> excluded;
    recursive(0);

    return 0;
}
