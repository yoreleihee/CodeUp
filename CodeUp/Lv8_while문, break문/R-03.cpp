#include <iostream>
using namespace std;

char arr[5] = {};
int n;

int main()
{
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];

        cout << arr[i];
    }
    return 0;
}
