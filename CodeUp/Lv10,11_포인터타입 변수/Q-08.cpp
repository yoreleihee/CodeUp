#include <iostream>
using namespace std;

int table[4][4] = {0};
int main()
{
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            cin >> table[i][j];

            if (table[i][j] == 0){
                cout << "!";
            }
            else if (table[i][j] % 2 == 0){
                cout << "#";
            }
            else if (table[i][j] % 2 == 1){
                cout << "@";
            }

        }

        cout << endl;
    }
    return 0;
}
