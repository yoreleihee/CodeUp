#include <iostream>
using namespace std;

int level, branch;

void recursive(int level){
    if (level == 0){
        return;
    }

    for (int i = 0; i < branch; ++i)
    {
        recursive(level - 1);
    }
}
int main() {
    cin >> level >> branch;

    recursive(level);

    return 0;
}
