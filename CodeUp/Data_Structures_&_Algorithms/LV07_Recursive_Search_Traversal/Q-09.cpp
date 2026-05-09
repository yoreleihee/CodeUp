#include <iostream>
using namespace std;

int main()
{
    string arr[5] = {
            "Jason",
            "Dr.tom",
            "EXEXI",
            "GK12P",
            "POW"
    };

    string input;
    cin >> input;

    for (int i = 0; i < size(arr); ++i)
    {
        if (input == arr[i]){
            cout << "암호해제";
            return 0;
        }
    }

    cout << "암호틀림";
    return 0;
}
