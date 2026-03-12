#include <iostream>
using namespace std;

char arr[17];

void input(){
    char a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i <= 6; ++i)
    {
        arr[i] = a;
    }

    for (int i = 7; i <= 12 ; ++i)
    {
        arr[i] = b;
    }

    for (int i = 13; i <= 16; ++i)
    {
        arr[i] = c;
    }
}

int main()
{
    input();
    for (int i = size(arr) - 1; i >= 0 ; --i)
    {
        cout << arr[i];
    }
    return 0;
}
