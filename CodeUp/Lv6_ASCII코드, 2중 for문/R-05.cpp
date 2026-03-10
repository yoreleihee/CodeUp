#include <iostream>
using namespace std;

int main()
{
    int arr[3];

    int sum = 0;
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];

        sum += arr[i];
    }

    for (int i = 0; i < sum; ++i)
    {
        for (int j = 0; j < size(arr); ++j)
        {
            cout << arr[j] << " ";
        }

        cout << endl;
    }


    return 0;
}
