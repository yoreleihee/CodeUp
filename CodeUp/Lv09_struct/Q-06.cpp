#include <iostream>
using namespace std;

char table[3][3];

int main(){
    char c = 'A';
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            table[i][j] = c++;
        }
    }

    int y1, x1, y2, x2;
    cin >> y1 >> x1 >> y2 >> x2;

    char temp = table[y1][x1];
    table[y1][x1] = table[y2][x2];
    table[y2][x2] = temp;

    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            cout << table[i][j];
        }
        cout << endl;
    }
    return 0;
}