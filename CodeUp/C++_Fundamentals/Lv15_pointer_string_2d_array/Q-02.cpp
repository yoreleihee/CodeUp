#include <iostream>
using namespace std;

int main()
{
    int vect[] = {10, 50, 40, 20, 30, 40};

    int arr[6] = {};
    for (int i = 0; i < size(arr); ++i) {
        cin>> arr[i];
    }

    int countArr[6] = {0};
    for (int i = 0; i < size(arr); ++i) {
        for (int j = 0; j < size(vect); ++j) {
            if (arr[i] < vect[j]) {
                countArr[i]++;
            }
        }
    }

    for (int i = 0; i < size(arr); ++i) {
        cout << arr[i] << "=" << countArr[i] << "개" << endl;
    }

    return 0;
}
