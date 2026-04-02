#include <iostream>
using namespace std;

int main()
{
    int input = 5127;

    int value = 1000;
    while (input > 0) {
        int result = input / value;

        input %= value;
        value /= 10;

        cout << "숫자" << result << endl;
    }
    return 0;
}
