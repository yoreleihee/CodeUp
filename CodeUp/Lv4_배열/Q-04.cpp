#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    num += 5;

    int arr[5];

    for (int i = 0; i < size(arr); ++i)
    {
        arr[i] = num;
    }

    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
