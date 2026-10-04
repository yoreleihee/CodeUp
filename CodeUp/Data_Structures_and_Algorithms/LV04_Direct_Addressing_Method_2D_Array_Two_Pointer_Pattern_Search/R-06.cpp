#include <iostream>
using namespace std;

char map[3][5] = {
        "ABGK",
        "TTAB",
        "ACCD"
};

char pattern[2][3] = {
        "AB",
        "CD"
};

bool isPattern(int y, int x){
    for (int i = 0; i < size(pattern); ++i)
    {
        int len = strlen(pattern[i]);
        for (int j = 0; j < len; ++j)
        {
            if (pattern[i][j] != map[y + i][x + j]){
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int count = 0;
    for (int i = 0; i < size(map); ++i)
    {
        int len = strlen(map[i]);
        for (int j = 0; j < len; ++j)
        {
            if (isPattern(i, j)){
                count++;
            }
        }
    }

    if (count > 0) {
        cout << "발견(" << count << "개)";
    } else {
        cout << "미발견";
    }

    return 0;
}
