#include <iostream>
using namespace std;

char names[6] = "BTSKR";
char path[6] = {};
int n = 0;
int visited[5] = {};
int cnt = 0;

void recursive(int level){
    if (level == n){
        if (visited[2] == 1){
            cnt++;
        }

        return;
    }

    for (int i = 0; i < 5; ++i)
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
    cin >> n;
    recursive(0);

    cout << cnt;
    return 0;
}
