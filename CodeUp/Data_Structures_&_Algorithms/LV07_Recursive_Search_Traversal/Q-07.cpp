#include <iostream>
using namespace std;

int total = 0;
char input[4] = {};
char path[4] = {};
void recursive(int level){
    if (level == 3){
        total++;

        if (strcmp(input, path) == 0){
            cout << total << "번째";
        }

        return;
    }

    for (int i = 0; i < 4; ++i)
    {
        path[level] = 'A' + i;
        recursive(level + 1);
        path[level] = 0;
    }
}
int main()
{
    cin >> input;
    recursive(0);
    return 0;
}
