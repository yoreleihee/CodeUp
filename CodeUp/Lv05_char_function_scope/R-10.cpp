#include <iostream>
using namespace std;

int arr[6];

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < size(arr); ++i)
    {
        arr[i] = num * (i + 1);

        cout << arr[i] << " ";
    }

    return 0;
}
