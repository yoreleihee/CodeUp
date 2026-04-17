#include <iostream>
using namespace std;

int main() {
    char arr[9] = {};

    cin >> arr;

    int hashTable[256] = {};

    for (int i = 0; i < size(arr); ++i)
    {
        int idx = arr[i];

        hashTable[idx]++;
    }

    int maxIdx = 0;
    for (int i = 1; i < size(hashTable); ++i)
    {
        if (hashTable[maxIdx] < hashTable[i]){
            maxIdx = i;
        }
    }

    cout << (char)maxIdx;

    return 0;
}
