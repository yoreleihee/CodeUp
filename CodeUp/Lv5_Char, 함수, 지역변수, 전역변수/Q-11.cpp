#include <iostream>
using namespace std;

int arr[6];

void PrintAll(){
    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < size(arr); ++i)
    {
        arr[i] = num++;
    }

    PrintAll();
    return 0;
}
