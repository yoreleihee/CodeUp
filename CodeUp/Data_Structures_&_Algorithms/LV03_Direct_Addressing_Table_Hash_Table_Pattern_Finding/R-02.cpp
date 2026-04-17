#include <iostream>
using namespace std;

int arr[6] = {};

int main() {
    int hashTable[10] = {};

    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];

        int idx = arr[i];
        hashTable[idx]++;
    }

    for (int i = 0; i < size(hashTable); ++i)
    {
        if (hashTable[i] >= 2){
            cout << "도플갱어 발견";
            return 0;
        }
    }

    cout << "미발견";
    return 0;
}
