#include <iostream>
using namespace std;
#include <climits>

int main()
{
    int arr[3];

    int max = 0;
    int min = INT_MAX;

    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];

        if (max < arr[i]){
            max = arr[i];
        }

        if (min > arr[i]){
            min = arr[i];
        }
    }

    cout << "MAX=" << max << endl;
    cout << "MIN=" << min;
    return 0;
}
