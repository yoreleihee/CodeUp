#include <iostream>
using namespace std;

int main() {
    char arr[11] = {};
    cin >> arr;

    int len = strlen(arr);
    for (int i = len - 1; i >= 0; --i)
    {
        for (int j = i; j < len; ++j)
        {
            cout << arr[j];
        }

        cout << endl;
    }

    return 0;
}
