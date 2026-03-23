#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {};

    int num;
    cin >> num;

    for (int i = 0; i < size(arr); ++i)
    {
        arr[i] = num--;
    }

    cout << arr[2];
    return 0;
}
