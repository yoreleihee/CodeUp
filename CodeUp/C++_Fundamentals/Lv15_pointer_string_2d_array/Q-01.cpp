#include <iostream>
using namespace std;

int main()
{
    int vect[] = {3, 5, 1, 1, 2, 3, 2};

    int arr[4] = {};
    for (int i = 0; i < size(arr); ++i) {
        cin>> arr[i];
    }

    int countArr[4] = {0};
    for (int i = 0; i < size(vect); ++i) {
        if (vect[i] == arr[0]) {
            countArr[0]++;
        }
        else if (vect[i] == arr[1]) {
            countArr[1]++;
        }
        else if (vect[i] == arr[2]) {
            countArr[2]++;
        }
        else if (vect[i] == arr[3]) {
            countArr[3]++;
        }
    }

    for (int i = 0; i < size(arr); ++i) {
        cout << arr[i] << "=" << countArr[i] << "개" << endl;
    }

    return 0;
}
