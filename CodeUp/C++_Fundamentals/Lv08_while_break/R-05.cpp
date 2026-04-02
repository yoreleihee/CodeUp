#include <iostream>
using namespace std;

char a, b;
int num;

int main()
{
    cin >> a >> b >> num;

    for (int i = 0; i < num; ++i)
    {
        for (int j = a; j <= b; ++j)
        {
            cout << (char)j;
        }
        cout << endl;
    }
    return 0;
}
