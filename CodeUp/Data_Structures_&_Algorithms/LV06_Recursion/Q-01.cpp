#include <iostream>
using namespace std;

void recursive(int depth){
    if (depth == 2){
        return;
    }

    recursive(depth + 1);
    recursive(depth + 1);
    recursive(depth + 1);
}
int main() {
    recursive(0);

    return 0;
}
