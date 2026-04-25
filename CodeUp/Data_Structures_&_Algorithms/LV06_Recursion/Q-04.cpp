#include <iostream>
using namespace std;

int level;

void recursive(int depth){
    cout << depth;
    if (depth == level){
        return;
    }

    recursive(depth + 1);
    recursive(depth + 1);
}
int main() {
    cin >> level;

    recursive(0);

    return 0;
}
