#include <iostream>
using namespace std;

int table[3][4] = {0};
int num;

void input(){
    cin >> num;

    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            table[i][j] = num++;
        }
    }
}

void process(){
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            table[i][j] += 1;
        }
    }
}

void output(){
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
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
