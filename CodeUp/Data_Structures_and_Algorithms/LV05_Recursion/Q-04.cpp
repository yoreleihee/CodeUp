#include <iostream>
using namespace std;

void recursive(int num, int depth){
    if (depth == 0){
        cout << num << " ";
        return;
    }

    recursive(num + 2, depth - 1);

    cout << num << " ";
}
int main() {
    recursive(1, 3);

    return 0;
}
