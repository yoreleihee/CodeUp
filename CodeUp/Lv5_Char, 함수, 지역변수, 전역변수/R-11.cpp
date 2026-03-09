#include <iostream>
using namespace std;

int arr[6];

int main()
{
    for (int i = 0; i < 3; ++i)
    {
        cin >> arr[i];
    }

    int num;
    cin >> num;

    for (int i = 3; i < 6; ++i)
    {
        arr[i] = num++;
    }

    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
