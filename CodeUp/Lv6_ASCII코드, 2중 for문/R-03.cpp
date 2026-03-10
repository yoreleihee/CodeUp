#include <iostream>
using namespace std;

int main()
{
    int arr1[5];
    int arr2[5];

    for (int i = 0; i < size(arr1); ++i)
    {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }

    for (int i = 0; i < size(arr1); ++i)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size(arr2); ++i)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}
