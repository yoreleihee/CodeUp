#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'A', '1', '1', '1', '5', 'A', 'w'};

    char input;
    cin >> input;

    int count = 0;
    for (int i = 0; i < size(arr); ++i) {
        if (arr[i] == input) {
            count++;
        }
    }

    if (count >= 3) {
        cout << "THREE";
    }
    else if (count >= 2) {
        cout << "TWO";
    }
    else if (count >= 1) {
        cout << "ONE";
    }
    else {
        cout << "NOTHING";
    }

    return 0;
}