#include <iostream>
using namespace std;

int main()
{
    int arr[6];

    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
    }

    // 선택 정렬
    for (int j = 0; j < size(arr) - 1; ++j)
    {
        for (int i = j + 1; i < size(arr); ++i)
        {
            if (arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i];
    }

    return 0;
}
