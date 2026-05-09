#include <iostream>
using namespace std;

char path[3] = {};

void recursive(int level){
    if (level == 2){
        cout << path << endl;
        return;
    }

    for (int i = 0; i < 3; ++i)
    {
        path[level] = 'A' + i;
        recursive(level + 1);
        path[level] = 0;
    }
}

int main()
{
    recursive(0);
    return 0;
}
