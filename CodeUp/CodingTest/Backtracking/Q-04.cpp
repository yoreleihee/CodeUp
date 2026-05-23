#include <iostream>
using namespace std;

char nums[7] = {};
char path[7] = {};
int pathSize = 0;

void recursive(int level){
    if (level == strlen(nums)){
        cout << "[";
        cout << path;
        cout << "]" << endl;
        return;
    }

    recursive(level + 1);

    path[pathSize] = nums[level];
    pathSize++;
    recursive(level + 1);
    pathSize--;
    path[pathSize] = 0;
}

int main()
{
    cin >> nums;
    recursive(0);

    return 0;
}
