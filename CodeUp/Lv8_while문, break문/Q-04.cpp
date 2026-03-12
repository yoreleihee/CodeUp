#include <iostream>
using namespace std;

int arr[6];

int main()
{
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
    }

    for (int i = size(arr) - 1; i >= 0; --i)
    {
        if (arr[i] == 7){
            cout << arr[i] << " ";
            break;
        }
        cout << arr[i] << " ";
    }
    return 0;
}
