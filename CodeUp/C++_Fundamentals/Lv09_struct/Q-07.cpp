#include <iostream>
using namespace std;

int table[6][2];

int main(){
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            cin >> table[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < 6; ++i)
    {
        if (table[i][0] < table[i][1]){
            count++;
            int temp = table[i][0];
            table[i][0] = table[i][1];
            table[i][1] = temp;
        }
    }

    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    cout << count <<"명";
    return 0;
}