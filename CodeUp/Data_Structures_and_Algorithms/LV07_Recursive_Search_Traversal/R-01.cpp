#include <iostream>
using namespace std;

int main()
{
    char vect[2][2][4] = {
            {
                "ATB",
                "CCB"
            },
            {
                "AAA",
                "BBC"
            }
    };

    char input;
    cin >> input;

    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            for (int k = 0; k < size(vect[i][j]); ++k)
            {
                if (input == vect[i][j][k]){
                    cout << "발견";
                    return 0;
                }
            }
        }
    }

    cout << "미발견";
    return 0;
}
