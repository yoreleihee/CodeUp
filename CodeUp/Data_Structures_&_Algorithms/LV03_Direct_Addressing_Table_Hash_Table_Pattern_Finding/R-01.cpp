#include <iostream>
using namespace std;

char vect[2][4] {
    "GKB"
};

int main() {
    cin >> vect[1];

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
        if (hashTable[i] >= 3){
            cout << "있음";
            return 0;
        }
    }

    cout << "없음";
    return 0;
}
