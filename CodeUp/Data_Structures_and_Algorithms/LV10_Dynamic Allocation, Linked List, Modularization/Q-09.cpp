#include <iostream>
using namespace std;

int main()
{
    char arr[4][5] = {};

    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
    }

    for (int x = 0; x < 4; ++x)
    {
        int count = 0;
        for (int y = 0; y < 4; ++y)
        {
            char c = arr[y][x];
            if (c >= 'A' && c <='Z'){
                count++;
            }
        }

        cout << count << " ";
    }
    return 0;
}