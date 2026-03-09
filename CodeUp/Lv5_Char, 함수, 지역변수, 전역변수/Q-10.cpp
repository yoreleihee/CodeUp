#include <iostream>
using namespace std;

int arr[4];

void input(){
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
    }
}

void output(){
    for (int i = size(arr) - 1; i >= 0; --i)
    {
        cout << arr[i];
    }
}

int main()
{
    input();
    output();

    return 0;
}
