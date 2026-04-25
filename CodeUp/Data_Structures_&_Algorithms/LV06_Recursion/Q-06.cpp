#include <iostream>
using namespace std;

int level, branch;
int totalCount = 0;

void recursive(int level){
    totalCount++;
    if (level == 0){
        return;
    }

    for (int i = 0; i < branch; ++i)
    {
        recursive(level - 1);
    }
}
int main() {
    cin >> branch >> level;

    recursive(level);

    cout << totalCount;

    return 0;
}
