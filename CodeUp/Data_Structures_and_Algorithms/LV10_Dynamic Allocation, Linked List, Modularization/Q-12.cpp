#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    char result[3][6] = {};

    int strIdx = 0;
    for (int y = 0; y < 3; ++y)
    {
        for (int x = 0; x < 5; ++x)
        {
            result[y][x] = str[strIdx];
            strIdx++;

            cout << result[y][x];
        }

        cout << endl;
    }
    return 0;
}