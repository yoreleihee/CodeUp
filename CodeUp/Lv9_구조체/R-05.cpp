#include <iostream>
using namespace std;

char table[2][3] = {0};

void Input(){
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            cin >> table[i][j];
        }
    }
}

void findUpper(){
    int count = 0;

    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            if ('A' <= table[i][j] && table[i][j] <= 'Z'){
                count++;
            }
        }
    }

    cout << "대문자" << count << "개" << endl;
}

void findLower(){
    int count = 0;

    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            if ('a' <= table[i][j] && table[i][j] <= 'z'){
                count++;
            }
        }
    }

    cout << "소문자" << count << "개" << endl;
}
int main()
{
    Input();
    findUpper();
    findLower();
    return 0;
}
