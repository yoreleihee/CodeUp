#include <iostream>
using namespace std;

char c;
int num;

int main()
{
    cin >> c >> num;

    for (int i = 0; i < num; ++i)
    {
        for (int j = 0; j < num; ++j)
        {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}
