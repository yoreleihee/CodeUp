#include <iostream>
using namespace std;

int main() {
    char arr[10] = {};
    cin >> arr;

    int len = strlen(arr);

    for (int i = 0; i < len; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << arr[j];
        }
        cout << endl;
    }

    return 0;
}
