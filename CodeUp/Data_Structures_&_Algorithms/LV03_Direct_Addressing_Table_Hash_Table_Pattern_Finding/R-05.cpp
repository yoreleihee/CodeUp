#include <iostream>
using namespace std;

int main() {
    char arr[] = "ATKPTCABC";

    char a, b;
    cin >> a >> b;

    int len = strlen(arr);

    int left = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] == a) {
            left = i;
            break;
        }
    }

    int right = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (arr[i] == b) {
            right = i;
            break;
        }
    }

    cout << abs(right - left);
    return 0;
}
