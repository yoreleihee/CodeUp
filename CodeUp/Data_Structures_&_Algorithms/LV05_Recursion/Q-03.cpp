#include <iostream>
using namespace std;

void recursive(int inputCount){
    if (inputCount == 0){
        return;
    }
    int input;
    cin >> input;

    cout << input << " ";

    recursive(inputCount - 1);

    if (inputCount == 1){
        return;
    }

    cout << input << " ";
}
int main() {
    int inputCount = 6;
    recursive(inputCount);

    return 0;
}
