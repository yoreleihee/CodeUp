#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 1, 3, 2, 7, 3};

    int input;
    cin >> input;

    int flag = 0;
    for (int i = 0; i < size(arr); ++i) {
        if (arr[i] == input) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        cout << "발견";
    }
    else {
        cout << "미발견";
    }
    return 0;
}
