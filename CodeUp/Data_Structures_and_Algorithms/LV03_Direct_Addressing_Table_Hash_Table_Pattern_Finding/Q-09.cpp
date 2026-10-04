#include <iostream>
using namespace std;

int vect[3][5] = {
        1, 3, 3, 5, 1,
        3, 6, 2, 4, 2,
        1, 9, 2, 6, 5
};

int input = 0;

int main() {
    cin >> input;

    int hashTable[10] = {};
    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            int idx = vect[i][j];
            hashTable[idx]++;
        }
    }

    for (int i = 0; i < size(hashTable); ++i)
    {
        if (input == hashTable[i]){
            cout << i << " ";
        }
    }
    return 0;
}
