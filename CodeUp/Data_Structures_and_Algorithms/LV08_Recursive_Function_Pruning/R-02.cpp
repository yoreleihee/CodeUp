#include <iostream>
using namespace std;

int main()
{
    int pos[3][2] = {};

    for (int i = 0; i < size(pos); ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cin >> pos[i][j];
        }
    }

    for (int i = 0; i < size(pos); ++i)
    {
        for (int j = i + 1; j < size(pos) && i <= j; ++j)
        {
            if (pos[i][0] == pos[j][0] || pos[i][1] == pos[j][1]){
                cout << "위험";
                return 0;
            }
        }
    }

    cout << "안전";
    return 0;
}
