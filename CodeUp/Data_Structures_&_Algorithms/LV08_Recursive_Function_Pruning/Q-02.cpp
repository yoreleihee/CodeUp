#include <iostream>
using namespace std;

char names[5] = {};
char path[5] = {};
int totalCount = 0;

void recursive(int level){
    if (level == 4){
        totalCount++;
        return;
    }

    for (int i = 0; i < 4; ++i)
    {
        path[level] = names[i];
        if (level > 0){
            if (path[level - 1] == 'B' && path[level] == 'T'){
                continue;
            }
            else if (path[level - 1] == 'T' && path[level] == 'B'){
                continue;
            }
        }

        recursive(level + 1);
        path[level] = 0;
    }
}

int main()
{
    cin >> names;
    recursive(0);

    cout << totalCount;
    return 0;
}
