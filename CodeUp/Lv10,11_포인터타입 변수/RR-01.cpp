#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'D', 'F', 'G', 'D', 'A', 'Q'};

    char a, b;
    cin >> a >> b;

    int flag = 0;
    for (int i = 0; i < size(arr); ++i) {
        if (a <= arr[i] && arr[i] <= b) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        cout << "발견!!!";
    }
    else {
        cout << "미발견!!!";
    }
    return 0;
}