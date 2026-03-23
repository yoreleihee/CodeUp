#include <iostream>
using namespace std;

int main()
{
    char arr1[5];
    char arr2[5];

    char c;
    cin >> c;

    char temp1 = c;
    char temp2 = c;
    for (int i = 0; i < size(arr1); ++i)
    {
        arr1[i] = temp1++;
        arr2[i] = temp2--;
    }

    for (int i = 0; i < size(arr1); ++i)
    {
        cout << arr1[i];
    }
    cout << endl;
    for (int i = 0; i < size(arr2); ++i)
    {
        cout << arr2[i];
    }

    return 0;
}
