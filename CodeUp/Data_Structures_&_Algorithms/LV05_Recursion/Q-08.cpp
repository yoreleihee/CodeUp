#include <iostream>
using namespace std;

void recursive(int num){
    if (num == 0){
        return;
    }

    recursive(num / 2);

    cout << num << " ";
}
int main() {
    int num;
    cin >> num;

    recursive(num);

    return 0;
}
