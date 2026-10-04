#include <iostream>
using namespace std;

char path[5] = {};
int input = 0;
void recursive(int level){
    if (level == 4){
        cout << path << endl;
        return;
    }

    for (int i = 1; i <= input; ++i)
    {
        path[level] = '0' + i;
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
