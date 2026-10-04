#include <iostream>
using namespace std;

void process(char* arr, int idx, int len) {
    memcpy(arr + idx, arr + idx, sizeof(char) * (len - idx));
}
int main()
{
    char arr[8] = {};

    int idx;
    cin >> arr >> idx;

    process(arr, idx, size(arr));

    cout << arr;

    return 0;
}
