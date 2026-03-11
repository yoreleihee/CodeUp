#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 5, 2, 4, 1};
    int table[3][2] = {
            {9, 8},
            {7, 1},
            {3, 4}
    };

    int num;
    cin >> num;

    if (num % 2 == 1){
        for (int i = 0; i < size(arr); ++i)
        {
            cout << arr[i] << endl;
        }
    } else{
        for (int i = 0; i < size(table); ++i)
        {
            for (int j = 0; j < size(table[0]); ++j)
            {
                cout << table[i][j];
            }

            cout << endl;
        }
    }
    return 0;
}
