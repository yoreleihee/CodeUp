#include <iostream>
using namespace std;

int main() {
    int vect[3][3] = {};

    int hashTable[10] = {};

    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            cin >> vect[i][j];

            int idx = vect[i][j];
            hashTable[idx]++;
        }
    }

    for (int i = 1; i < size(hashTable); ++i)
    {
        if (hashTable[i] == 0){
            cout << i << " ";
        }
    }

    return 0;
}
