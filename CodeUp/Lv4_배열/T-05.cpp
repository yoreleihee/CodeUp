#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {};

    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
    }

    int result = arr[0] + arr[1] + arr[2];

    cout << result;
    return 0;
}
