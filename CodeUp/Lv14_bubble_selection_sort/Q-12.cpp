#include <iostream>
using namespace std;

int main()
{
    char table[3][6] = {
            "POTIO",
            "ABCDE",
            "YOURE"
    };

    int a, b;
    cin >> a >> b;

    for (int i = 0; i < size(table); ++i)
    {
        for (int j = a; j <= b; ++j)
        {
            cout << table[i][j];
        }
    }

    return 0;
}
