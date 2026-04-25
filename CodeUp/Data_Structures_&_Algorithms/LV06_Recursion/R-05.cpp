#include <iostream>
using namespace std;

int main() {
    int arr[8] = {};

    int bucket[10] = {};
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
        int idx = arr[i];
        bucket[idx]++;
    }

    for (int i = 0; i < size(bucket); ++i)
    {
        for (int j = 0; j < bucket[i]; ++j)
        {
            cout << i << " ";
        }
    }

    return 0;
}
