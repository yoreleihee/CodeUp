#include <iostream>
using namespace std;

int main()
{
    char arr[100] = {};

    cin >> arr;

    int length = 0;

    while (arr[length] != '\0'){
        length++;
    }

    // 버블 정렬
    for (int i = 0; i < length - 1; ++i)
    {
        for (int j = 0; j < length - 1 - i; ++j)
        {
            if (arr[j] > arr[j + 1]){
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 선택 정렬
    for (int j = 0; j < length - 1; ++j)
    {
        for (int i = j + 1; i < length; ++i)
        {
            if (arr[j] > arr[i]){
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < length; ++i)
    {
        cout << arr[i];
    }

    return 0;
}
