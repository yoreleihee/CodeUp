#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int arr[6];

    for (int i = 0; i < size(arr); ++i)
    {
        arr[i] = num++;
        cout << arr[i] << endl;
    }

    return 0;
}
