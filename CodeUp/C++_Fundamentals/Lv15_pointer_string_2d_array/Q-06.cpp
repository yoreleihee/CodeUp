#include <iostream>
using namespace std;

int main()
{
    int arr[6];

    for (int i = 0; i < size(arr); ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < size(arr) - 1; ++i) {
        if (abs(arr[i] - arr[i + 1]) >= 3) {
            cout << "재배치필요";
            return 0;
        }
    }

    cout << "완벽한배치";
    return 0;
}
