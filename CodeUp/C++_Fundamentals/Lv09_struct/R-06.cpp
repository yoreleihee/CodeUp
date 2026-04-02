#include <iostream>
using namespace std;

int table[3][3] = {
        3, 5, 14,
        2, 3, 9,
        6, 2, 7
};

int main()
{
    int num;
    cin >> num;

    int count = 0;
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            if (table[i][j] % num == 0){
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
