#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    int count = 0;
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];

        if (3 <= arr[i] && arr[i] <= 7){
            count++;
        }
    }

    cout << count;
    return 0;
}
