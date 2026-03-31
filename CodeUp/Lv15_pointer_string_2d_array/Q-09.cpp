#include <iostream>
using namespace std;

int main()
{
    char arr[11] = {};

    cin >> arr;

    int len = strlen(arr);
    bool isCorrect = true;
    for (int i = 0; i < len; ++i) {
        if ((i + 1) % 2 == 1) {
            if (islower(arr[i])) {
                isCorrect = false;
                break;
            }
        }
        else {
            if (isupper(arr[i])) {
                isCorrect = false;
                break;
            }
        }
    }

    if (isCorrect) {
        cout << "개구리문장";
    }
    else {
        cout << "일반문장";
    }
    return 0;
}
