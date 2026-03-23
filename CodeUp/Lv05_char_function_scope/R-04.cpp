#include <iostream>
using namespace std;

int arr[5];

void KFC(){
    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i];
    }
}
int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < size(arr); ++i)
    {
        arr[i] = num--;
    }

    KFC();

    return 0;
}
