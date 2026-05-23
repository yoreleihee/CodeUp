#include <iostream>
using namespace std;

char nums[7] = {};
char path[7] = {};
int visited[7] = {};

void recursive(int level){
    if (level == strlen(nums)){
        cout << path << endl;
        return;
    }

    for (int i = 0; i < strlen(nums); ++i)
    {
        if (visited[i] == 1){
            continue;
        }

        path[level] = nums[i];
        visited[i] = 1;
        recursive(level + 1);
        path[level] = 0;
        visited[i] = 0;
    }
}

int main()
{
    cin >> nums;
    recursive(0);

    return 0;
}
