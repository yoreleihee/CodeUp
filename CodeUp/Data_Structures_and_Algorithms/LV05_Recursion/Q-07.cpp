#include <iostream>
using namespace std;

int arr[] = {3, 7, 4, 1, 9, 4, 6, 2};

void recursive(int idx){
    if (idx == 0){
        cout << arr[idx] << " ";
        return;
    }

    cout << arr[idx] << " ";

    recursive(idx - 1);

    cout << arr[idx] << " ";
}
int main() {
    int idx;
    cin >> idx;

    recursive(3);

    return 0;
}
