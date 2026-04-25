#include <iostream>
using namespace std;

void recursive(int level){
    if (level == 1){
        cout << level << " ";
        return;
    }
    cout << level << " ";
    recursive(level - 1);

    cout << level << " ";
}
int main() {
    char arr[10] = {};
    cin >> arr;

    int len = strlen(arr);

    recursive(len);
    return 0;
}
