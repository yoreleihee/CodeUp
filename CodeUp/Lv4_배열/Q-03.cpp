#include <iostream>
using namespace std;

int main()
{
    int arr[7];
    int size = std::size(arr);
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    int result = arr[0] + arr[size - 1];

    cout << result;

    return 0;
}
