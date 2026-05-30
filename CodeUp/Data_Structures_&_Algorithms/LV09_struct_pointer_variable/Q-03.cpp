#include <iostream>
using namespace std;

struct Robot{
    int a, b;
    string str;
};
int main()
{
    Robot robert;

    cin >> robert.a >> robert.b >> robert.str;

    Robot* pRobert = &robert;

    cout << pRobert->a + pRobert-> b << " " << pRobert->str;
    return 0;
}
