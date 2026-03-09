#include <iostream>
using namespace std;

int arr[4];

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < 4; ++i)
    {
        arr[i] = num--;

        cout << arr[i] << " ";
    }

    return 0;
}
