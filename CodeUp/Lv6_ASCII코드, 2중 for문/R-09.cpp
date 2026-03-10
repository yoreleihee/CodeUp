#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 4, 1, 2, 7, 8};

    int num;
    cin >> num;

    for (int i = 0; i < num; ++i)
    {
        for (int j = size(arr) - 1; j >= 0; --j)
        {
            cout << arr[j] << " ";
        }

        cout << endl;
    }

    return 0;
}
