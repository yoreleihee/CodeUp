#include <iostream>
using namespace std;

int main()
{
    char arr[2];

    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];

        if ('a' <= arr[i] && arr[i] <= 'z'){
            int result = arr[i] - 'a' + 'A';
            cout << (char)result << " ";
        }
        else if ('A' <= arr[i] && arr[i] <= 'Z'){
            int result = arr[i] + 'a' - 'A';
            cout << (char)result << " ";
        }
    }

    return 0;
}
