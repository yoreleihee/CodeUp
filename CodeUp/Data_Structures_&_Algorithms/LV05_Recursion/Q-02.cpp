#include <iostream>
using namespace std;

int recursive(int n){
    cout << n << " ";

    if (n == 0){
        return n;
    }

    recursive(n - 1);

    cout << n << " ";
}
int main() {
    recursive(4);

    return 0;
}
