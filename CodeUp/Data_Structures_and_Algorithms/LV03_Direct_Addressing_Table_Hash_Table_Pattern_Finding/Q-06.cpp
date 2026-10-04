#include <iostream>
using namespace std;

int main() {
    char vect[5][4] = {
            "ABC",
            "AGH",
            "HIJ",
            "KAB",
            "ABC"
    };

    int hashTable[256] = {};

    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]) - 1; ++j)
        {
            int idx = vect[i][j];
            hashTable[idx]++;
        }
    }

    for (int i = 0; i < size(hashTable); ++i)
    {
        for (int j = 0; j < hashTable[i]; ++j)
        {
            cout << (char)i;
        }
    }
    return 0;
}
