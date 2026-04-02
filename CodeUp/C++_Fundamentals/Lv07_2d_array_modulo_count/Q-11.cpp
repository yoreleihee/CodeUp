#include <iostream>
using namespace std;

int num;
int table[3][3];

void input(){
    cin >> num;
}

void process(){
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[0]); ++j)
        {
            table[i][j] = num++;
        }
    }
}

void output(){
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[0]); ++j)
        {
            cout << table[i][j] << " ";
        }

        cout << endl;
    }
}
int main()
{
    input();
    process();
    output();
    return 0;
}
