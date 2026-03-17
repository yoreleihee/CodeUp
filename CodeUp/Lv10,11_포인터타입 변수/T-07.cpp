#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {0};

    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < size(arr); ++i) {
        cin >> arr[i];

        if (max < arr[i]) {
            max = arr[i];
        }

        if (min > arr[i]) {
            min = arr[i];
        }
    }

    cout << "MAX=" << max << endl;
    cout << "MIN=" << min << endl;
    return 0;
}
