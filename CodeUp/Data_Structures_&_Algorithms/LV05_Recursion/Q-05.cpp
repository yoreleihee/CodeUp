#include <iostream>
using namespace std;

char arr[6] = {};
void recursive(int depth){
    if (depth == 5){
        return;
    }
    cin >> arr[depth];
    recursive(depth + 1);

    cout << arr[depth];
}
int main() {
    recursive(0);

    return 0;
}
