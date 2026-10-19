#include <iostream>
using namespace std;

struct BBQ{
    int a, b;
};
int main()
{
    BBQ* pBbq = new BBQ();

    cin >> pBbq->a >> pBbq->b;

    cout << pBbq->a + 5 << " " << pBbq->b + 5;
    return 0;
}