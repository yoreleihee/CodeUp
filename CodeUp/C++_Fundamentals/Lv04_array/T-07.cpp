#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 7, 1, 8, -4, -73, 4, 2, 20, 84};

    int index;
    cin >> index;

    for (int i = index; i >= 0; --i)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
