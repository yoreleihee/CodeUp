#include <iostream>
using namespace std;

int arr[] = {3, 5, 5, 6, 9, 1, 2};

void reverse(int scope1, int scope2){
    while (scope1 < scope2){
        swap(arr[scope1], arr[scope2]);
        scope1++;
        scope2--;
    }
}
int main()
{
    int scope1, scope2;
    cin >> scope1 >> scope2;

    reverse(scope1, scope2);

    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
