#include <iostream>
using namespace std;

char table[4][4];

void input(char num){
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[0]); ++j)
        {
            table[i][j] = num;
        }
    }
}

void output(){
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[0]); ++j)
        {
            cout << table[i][j];
        }

        cout << endl;
    }
}
int main()
{
    char c;
    cin >> c;

    input(c);
    output();
    return 0;
}
