#include <iostream>
using namespace std;

int main()
{
    char table[6][3] = {};
    char c = 'A';
    for (int i = 2; i >= 0; --i) {
        for (int j = size(table) - 1; j >= 0 ; --j) {
            table[j][i] = c++;
        }
    }

    int y, x;
    cin >> y >> x;

    cout << table[y][x];
    return 0;
}