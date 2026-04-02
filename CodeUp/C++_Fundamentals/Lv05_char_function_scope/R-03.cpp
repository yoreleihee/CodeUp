#include <iostream>
using namespace std;

int arr1[5];
int arr2[5];

void PrintAll(){
    for (int i = 0; i < size(arr1); ++i)
    {
        cout << arr1[i];
    }

    cout << endl;

    for (int i = 0; i < size(arr2); ++i)
    {
        cout << arr2[i];
    }
}
int main()
{
    int num = 0;

    cin >> num;
    for (int i = 0; i < size(arr1); ++i)
    {
        arr1[i] = num;
    }

    cin >> num;
    for (int i = 0; i < size(arr2); ++i)
    {
        arr2[i] = num;
    }

    PrintAll();

    return 0;
}
