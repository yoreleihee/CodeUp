#include <iostream>
using namespace std;

int table[3][3] = {
        10, 3, 20,
        60, 30, 40,
        20, 30, 40
};

int main()
{
    int a, b;
    cin >> a >> b;

    int count = 0;
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            if (a <= table[i][j] && table[i][j] <= b){
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
