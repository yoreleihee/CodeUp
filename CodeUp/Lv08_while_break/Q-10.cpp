#include <iostream>
using namespace std;

int table[3][4] = {
        {4, 3, 1, 1},
        {3, 1, 2, 1},
        {0, 0, 1, 2}
};

int num;
int main()
{
    cin >> num;

    int count = 0;

    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            if (table[i][j] == num){
                count++;
            }
        }
    }

    cout << count <<"개 존재합니다";
    return 0;
}
