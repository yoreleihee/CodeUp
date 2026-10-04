#include <iostream>
using namespace std;

int main() {
    int arr[7] = {};
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= 4; ++i)
    {
        for (int j = 0; j <= i + 2; ++j)
        {
            cout << arr[j] << " ";
        }

        cout << endl;
    }

    return 0;
}
