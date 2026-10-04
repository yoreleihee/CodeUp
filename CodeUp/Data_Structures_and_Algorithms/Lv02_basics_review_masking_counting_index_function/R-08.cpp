#include <iostream>
using namespace std;

int main() {
    char input;
    cin >> input;

    char table[5][6] = {
            "ABCDE",
            "FGHIJ",
            "KLMNO",
            "PQRST",
            "UVWXY"
    };

    int targetX = 0, targetY = 0;
    int baseX = 2, baseY = 2;

    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (input == table[i][j]){
                targetY = i;
                targetX = j;
            }
        }
    }

    cout << targetY - baseY << "," << targetX - baseX;
    return 0;
}
