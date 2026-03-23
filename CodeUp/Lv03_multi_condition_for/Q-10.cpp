#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    int temp = ((num * 2) + 20) / 5;

    if (temp != 100){
        cout << "Magic";
    }
    return 0;
}