#include <iostream>
using namespace std;

int table[2][3] = {0};

void input(){
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            cin >> table[i][j];
        }
    }
}

int sum = 0;
void process(){
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            sum += table[i][j];
        }
    }
}

void output(){
    cout << sum;
}
int main()
{
    input();
    process();
    output();
    return 0;
}
