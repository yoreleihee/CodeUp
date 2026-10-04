#include <iostream>
using namespace std;

char arr1[4][5] = {
        "ABCD",
        "BBAB",
        "CBAC",
        "BAAA"
};

char arr2[4][5] = {};
int table[256] = {};

void findDuplicate(){
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (arr1[i][j] == arr2[i][j]){
                int idx = arr1[i][j];
                table[idx]++;
            }
        }
    }
}

int main()
{
    for (int i = 0; i < size(arr2); ++i)
    {
        cin >> arr2[i];
    }

    findDuplicate();

    int maxIdx = 0;
    for (int i = 0; i < size(table); ++i)
    {
        if (table[maxIdx] < table[i]){
            maxIdx = i;
        }
    }

    cout << (char)maxIdx;
    return 0;
}
