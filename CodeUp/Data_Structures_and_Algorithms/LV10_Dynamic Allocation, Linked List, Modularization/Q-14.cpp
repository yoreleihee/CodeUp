#include <iostream>
using namespace std;

int num;
char path[10] = {};
void recursive(int level){
    if (level == num){
        cout << path << endl;
        return;
    }

    for (int i = 0; i < 6; ++i)
    {
        path[level] = '1' + i;
        recursive(level + 1);
        path[level] = 0;
    }
}
int main()
{
    cin >> num;
    recursive(0);
    return 0;
}