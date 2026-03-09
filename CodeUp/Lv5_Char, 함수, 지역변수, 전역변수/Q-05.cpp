#include <iostream>
using namespace std;

void LOT(){
    for (int i = 1; i <= 5; ++i)
    {
        cout << i;
    }
}
int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; ++i)
    {
        LOT();
        cout << endl;
    }
    return 0;
}
