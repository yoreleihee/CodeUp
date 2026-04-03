#include <iostream>
using namespace std;

int main()
{
    char arr[9] = {};
    cin >> arr;

    char a, b;
    cin >> a >> b;

    for (int i = 0; i < size(arr); ++i) {
        if (arr[i] == a) {
            arr[i] = b;
        }
    }

    int len = strlen(arr);
    for (int i = 0; i < len; ++i) {
        cout << arr[i];
    }
    return 0;
}