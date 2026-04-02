#include <iostream>
using namespace std;

int main()
{
    int table[3][3] = {
            {3, 4, 1},
            {2, 1, 4},
            {3, 3, 0}
    };

    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[0]); ++j)
        {
            if (table[i][j] % 2 == 0){
                evenCount++;
            } else{
                oddCount++;
            }
        }
    }

    cout << "쨕수 : " << evenCount << endl;
    cout << "홀수 : " << oddCount;
    return 0;
}
