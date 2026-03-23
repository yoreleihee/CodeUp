#include <iostream>
using namespace std;

char vect[2][6] = {
        '4', '5', '7', '1', '3', '2',
        'D', 'F', 'Q', 'W', 'G', 'Z'
};

int main()
{
    int input;
    cin >> input;

    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            char num = (char)input;
            if ((char)input == vect[i][j]){
                cout << vect[1][j];
                return 0;
            }
        }
    }

    return 0;
}
