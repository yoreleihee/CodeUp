#include <iostream>
using namespace std;

int main()
{
    char arr[3];

    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
    }

    char lastChar = arr[0];

    for (int i = 1; i < size(arr); ++i)
    {
        if (arr[i] > arr[i - 1]){
            lastChar = arr[i];
        }
    }

    if (lastChar == arr[0]){
        cout << "옳다" << arr[0];
    } else{
        cout << "옳지않음";
    }

    return 0;
}
