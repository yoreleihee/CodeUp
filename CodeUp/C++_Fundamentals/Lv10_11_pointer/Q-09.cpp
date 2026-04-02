#include <iostream>
using namespace std;

int INPUT(){
    int num;
    cin >> num;

    return num;
}

void CountDown(int value){
    for (int i = value; i >= 1; --i)
    {
        cout << i << " ";
    }
}
int main()
{
    int num = INPUT();
    CountDown(num);
    return 0;
}
