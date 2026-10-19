#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
            0, 5, 4,
            3, 0, 0,
            0, 0, 1
    };

    int result[3][3] = {};
    int num;
    cin >> num;

    for (int i = 0; i < num; ++i)
    {
        for (int y = 0; y < 3; ++y)
            for (int x = 0; x < 3; ++x)
                result[x][2 - y] = arr[y][x];

        for (int y = 0; y < 3; ++y)
            for (int x = 0; x < 3; ++x)
                arr[y][x] = result[y][x];
    }

    for (int y = 0; y < 3; ++y)
    {
        for (int x = 0; x < 3; ++x)
            cout << (arr[y][x] == 0 ? '_' : (char)('0' + arr[y][x])) << " ";
        cout << endl;
    }

    return 0;
}