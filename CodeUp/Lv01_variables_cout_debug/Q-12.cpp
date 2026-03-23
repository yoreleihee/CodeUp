#include <iostream>
using namespace std;

int main()
{
    // ??
    int a = 8;
    int num = a * 5;
    for (int i = 0; i < 5; ++i)
    {
        num *= num;
    }
    cout << num << endl;
    return 0;
}
