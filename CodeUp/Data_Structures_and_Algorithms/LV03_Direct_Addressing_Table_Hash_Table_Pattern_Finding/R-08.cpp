#include <iostream>
using namespace std;

int hashTable[256] = {};

int main() {


    for (int i = 0; i < 3; ++i)
    {
        char arr[10] = {};
        cin >> arr;

        int len = strlen(arr);
        for (int j = 0; j < len; ++j)
        {
            int idx = arr[j];
            hashTable[idx]++;
        }
    }

    for (int i = 0; i < size(hashTable); ++i)
    {
        if (hashTable[i] > 1){
            cout << "NO";
            return 0;
        }
    }

    cout << "Perfect";
    return 0;
}
