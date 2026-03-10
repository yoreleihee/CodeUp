#include <iostream>
using namespace std;

int main()
{
    char input;
    cin >> input;

    for (int i = 'A'; i <= input; ++i)
    {
        cout << (char)i;
    }

    return 0;
}
