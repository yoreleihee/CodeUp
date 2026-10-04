#include <iostream>
using namespace std;

int arr[] = {3, 4, 1, 1, 2, 6, 8, 7, 8, 9, 10};

int getSum(int index) {
    int sum = 0;
    for (int i = index; i < index + 5 && i < size(arr); ++i) {
        sum += arr[i];
    }

    return sum;
}
int main() {
    int input;
    cin >> input;

    cout << getSum(input);

    return 0;
}
