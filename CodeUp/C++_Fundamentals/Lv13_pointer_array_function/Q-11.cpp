#include <iostream>
using namespace std;

void input(int *arr){
    for (int i = 0; i < 5; ++i)
    {
        cin >> arr[i];
    }
}

int main()
{
    int arrA[5] = {};
    int arrB[5] = {};
    int arrC[5] = {};

    input(arrA);
    input(arrB);
    input(arrC);

    for (int i = 0; i < 5; ++i)
    {
        int product = arrA[i] * arrB[i];
        int result = product + arrC[i];

        cout << result << " ";
    }

    return 0;
}
