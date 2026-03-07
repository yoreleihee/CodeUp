#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num != 3){
        cout << "3이 아니다" << endl;
    }
    if (num != 5){
        cout << "5가 아니다" << endl;
    }
    if (1 < num && num < 10){
        for (int i = 5; i >= 1; --i)
        {
            cout << i << endl;
        }
    }

    return 0;
}
