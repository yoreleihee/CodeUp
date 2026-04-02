#include <iostream>
using namespace std;

int main()
{
    char arr[8];

    char big[8];
    char small[8];

    int smallIndex = 0;
    int bigIndex = 0;
    for (int i = 0; i < size(arr); ++i) {
        cin >> arr[i];

        if ('a' <= arr[i] && arr[i] <= 'z') {
            small[smallIndex] = arr[i];
            smallIndex++;
        }
        else {
            big[bigIndex] = arr[i];
            bigIndex++;
        }
    }

    cout << "big=";
    for (int i = 0; i < bigIndex; ++i) {
        cout << big[i];
    }

    cout << endl;
    cout << "small=";

    for (int i = 0; i < smallIndex; ++i) {
        cout << small[i];
    }

    return 0;
}
