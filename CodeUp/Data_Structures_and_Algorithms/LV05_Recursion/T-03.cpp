#include <iostream>
using namespace std;

int main() {
    char arr[11] = {};
    cin >> arr;

    int len = strlen(arr);
    int arr1Len = len / 2;
    int arr2Len = len - arr1Len;

    char arr1[6] = {}; // null 문자 포함
    char arr2[6] = {}; // null 문자 포함

    strncpy(arr1, arr, arr1Len);
    strncpy(arr2, arr + arr1Len, arr2Len);

    if (strcmp(arr1, arr2) == 0){
        cout << "동일한문장";
    } else{
        cout << "다른문장";
    }

    return 0;
}
