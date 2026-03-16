#include <iostream>
using namespace std;

void BBQ(int n){
    for (int i = 1; i <= n; ++i)
    {
        cout << i;
    }
}

void KFC(char c){
    for (int i = 0; i < 7; ++i)
    {
        cout << c;
    }
}
int main()
{
    int num;
    cin >> num;

    if (num % 2 == 1){
        int a;
        cin >> a;
        BBQ(a);

    } else{
        char a;
        cin >> a;
        KFC(a);
    }
    return 0;
}
