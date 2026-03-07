#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 25, 54, 2, -33, 57, 82, -8, 13, 1};

    int index;
    cin >> index;

    for (int i = index; i < size(arr); ++i)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
