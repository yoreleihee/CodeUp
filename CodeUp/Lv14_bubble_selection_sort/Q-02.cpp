#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;

    int i = 0;
    while (i < 3){
        int j = 0;
        while (j < 5){
            cout << input;
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}
