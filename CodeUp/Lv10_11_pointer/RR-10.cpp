#include <iostream>
using namespace std;

int vect[2][3] = {0};

int main()
{
    for (int i = size(vect) - 1; i >= 0; --i) {
        for (int j = size(vect[i]) - 1; j >= 0; --j) {
            cin >> vect[i][j];
        }
    }

    int arr[6] = {0};
    int arrIndex = 0;
    for (int i = size(vect) - 1; i >= 0; --i) {
        for (int j = size(vect[i]) - 1; j >= 0; --j) {
            arr[arrIndex] = vect[i][j];
            arrIndex++;
        }
    }

    int temp = arr[0];
    arr[0] = arr[5];
    arr[5] = temp;

    for (int i = 0; i < size(arr); ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}