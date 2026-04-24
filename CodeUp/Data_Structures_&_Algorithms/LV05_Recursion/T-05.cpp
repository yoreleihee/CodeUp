#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    for (int i = -3; i < 0; ++i)
    {
        char temp = ch + i;

        if (temp < 'A')
        {
            temp = 'Z' - ('A' - temp) + 1;
        }
        cout << temp;
    }

    cout << ch;

    for (int i = 1; i <= 3; ++i)
    {
        char temp = ch + i;

        if (temp > 'Z')
        {
            temp = 'A' + (temp - 'Z') - 1;
        }
        cout << temp;
    }

    return 0;
}
