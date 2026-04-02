#include <iostream>
using namespace std;

int arr[5];

int main()
{
    int sum = 0;
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "합은 " << sum << "입니다";

    return 0;
}
