#include <iostream>
using namespace std;

int main()
{
    int arr[6];

    for (int i = 0; i <= 2; ++i)
    {
        cin >> arr[i];
    }

    int num;
    cin >> num;

    for (int i = 3; i <= 5; ++i)
    {
        arr[i] = num++;
    }

    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
