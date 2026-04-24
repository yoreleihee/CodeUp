#include <iostream>
using namespace std;

void recursive(int a, int b){
    if (a == b){
        cout << a << " ";
        return;
    }

    cout << a << " ";

    recursive(a + 1, b);

    cout << a << " ";
}
int main() {
    int a, b;
    cin >> a >> b;
    recursive(a, b);

    return 0;
}
