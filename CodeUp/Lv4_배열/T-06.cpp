#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 9, 12, 15, 55};

    int a, b, c;

    cin >> a >> b >> c;

    int sum = a + b + c;

    if (sum > 10){
        cout << arr[size(arr) - 1];
    } else{
        cout << arr[0];
    }

    return 0;
}
