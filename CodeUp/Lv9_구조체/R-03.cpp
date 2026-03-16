#include <iostream>
using namespace std;

int table[5][3] = {
        'D', 'A', 'A',
        'B', 'C', 'D',
        'E', 'F', 'A',
        'A', 'A', 'D',
        'F', 'G', 'E'
};

int main()
{
    char c;
    cin >> c;

    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            if (c == table[i][j]){
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
    return 0;
}
