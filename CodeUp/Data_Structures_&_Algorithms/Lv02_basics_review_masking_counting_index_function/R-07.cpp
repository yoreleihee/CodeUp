#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 5, 4, 2};

    int bits[4] = {};

    int sum = 0;
    for (int i = 0; i < size(bits); ++i)
    {
        cin >> bits[i];

        if (bits[i] == 0){
            arr[i] = 0;
        }

        sum += arr[i];
    }

    cout << sum;

    return 0;
}
