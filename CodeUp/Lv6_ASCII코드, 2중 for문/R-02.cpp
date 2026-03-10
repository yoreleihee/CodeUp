#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;

    for (int i = a; i >= 'a'; --i)
    {
        cout << (char)i;
    }

    return 0;
}
