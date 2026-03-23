#include <iostream>
using namespace std;

int main()
{
    int arr[4];

    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size(arr); ++i)
    {
        sum += arr[i];
    }

    cout << sum;
    return 0;
}
