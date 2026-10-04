#include <iostream>
using namespace std;

int main()
{
    char vect[4][5][4] = {
            {
                    " # ",
                    "# #",
                    "###",
                    "# #",
                    "# #"
            },
            {
                    "###",
                    "# #",
                    "###",
                    "# #",
                    "###"
            },
            {
                    "###",
                    "# #",
                    "#  ",
                    "# #",
                    "###"
            },
            {
                    "## ",
                    "# #",
                    "# #",
                    "# #",
                    "## "
            }
    };

    int idx;
    cin >> idx;

    for (int i = 0; i < size(vect[idx]); ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << vect[idx][i][j];
        }

        cout << endl;
    }
    return 0;
}
