#include <iostream>
using namespace std;

int arr[] = {3, 4, 2, 5, 7, 9};
int main()
{
    int a, b;
    cin >> a>> b;

    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;

    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
