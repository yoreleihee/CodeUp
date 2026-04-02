#include <iostream>
using namespace std;

char table[3][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'E', 'A', 'B', 'A', 'B'},
        {'A', 'C', 'D', 'E', 'R'}
};
int main()
{
    char c;
    cin >> c;

    int count = 0;
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            if (table[i][j] == c){
                count++;
            }
        }
    }

    if (count >= 3){
        cout << "대발견";
    }
    else if (count >= 1){
        cout << "발견";
    } else{
        cout << "미발견";
    }

    return 0;
}
