#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {};
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
    }

    int a = 1;
    int b = size(arr) - 1;
    while (a <= b){
        if ( a < b && arr[0] > arr[a]){
            a++;
        }

        if ( a < b && arr[0] < arr[b]){
            b--;
        }

        if (arr[a] > arr[b]){
            swap(arr[a], arr[b]);
        }
        a++;
        b--;
    }

    swap(arr[0], arr[b]);

    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
