#include <iostream>
using namespace std;

char table[3][6] = {0};
char a, b;

int main()
{
    cin >> a>> b;

    int i = 0;
    while (i < size(table)){
        int j = 0;
        while (j <= 3){
            table[i][j] = a;
            j++;
        }

        while (j <= 5){
            table[i][j] = b;
            j++;
        }
        i++;
    }

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
