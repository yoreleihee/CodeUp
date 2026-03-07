#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 2, 3, 4, 7};

    for (int i = size(arr) - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
