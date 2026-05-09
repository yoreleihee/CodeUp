#include <iostream>
using namespace std;

char names[3] = "xo";
char path[10] = {};
int n = 0;

void recursive(int level){
    if (level == n){
        cout << path << endl;
        return;
    }

    for (int i = 0; i < 2; ++i)
    {
        path[level] = names[i];
        recursive(level + 1);
        path[level] = 0;
    }
}
int main()
{
    cin >> n;
    recursive(0);
    return 0;
}
