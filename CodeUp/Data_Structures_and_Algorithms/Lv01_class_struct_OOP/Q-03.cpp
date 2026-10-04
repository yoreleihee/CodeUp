#include <iostream>
using namespace std;

int main()
{
    char arr[7] = {};
    int num = 0;
    cin >> arr >> num;

    int len = strlen(arr);
    char tempArr[] = {};
    memcpy(tempArr, arr + num, sizeof(char) * (len - num));

    arr[num] = 'A';
    memcpy(arr + num + 1, tempArr, sizeof(char) * strlen(tempArr));

    cout << arr;

    return 0;
}
