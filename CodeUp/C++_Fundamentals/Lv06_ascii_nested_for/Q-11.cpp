#include <iostream>
using namespace std;

int main()
{
    char a, b;
    cin >> a >> b;

    for (int j = 0; j < 4; ++j)
    {
        for (int i = a; i <= b; ++i)
        {
            cout << (char)i << " ";
        }

        cout << endl;
    }

    return 0;
}
