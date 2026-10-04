#include <iostream>
using namespace std;

int main() {
    int hashTable[256] = {};
    char arr[11] = {};
    cin >> arr;

    int len = strlen(arr);
    for (int i = 0; i < len; ++i)
    {
        int idx = arr[i];
        hashTable[idx]++;
    }

    for (int i = 0; i < size(hashTable); ++i)
    {
        if (hashTable[i] != 0){
            cout << (char)i;
        }
    }
    return 0;
}
