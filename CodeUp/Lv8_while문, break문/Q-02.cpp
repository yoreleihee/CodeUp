#include <iostream>
using namespace std;

int arr[6];

int main()
{
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];

        if (arr[i] == 7){
            break;
        }
        cout << arr[i] << " ";
    }
    return 0;
}
