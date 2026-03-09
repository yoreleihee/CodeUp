#include <iostream>
using namespace std;

int arr[] = {3, 4, 1, 5, 8, 1, 7, 7, 3, 6, 9};

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < size(arr); i+= num)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
