#include <iostream>
using namespace std;

char arr[] = {'A', 'B', 'C'};

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

    for (int i = 0; i < num; ++i)
    {
        KFC();
        cout << endl;
    }
    return 0;
}
