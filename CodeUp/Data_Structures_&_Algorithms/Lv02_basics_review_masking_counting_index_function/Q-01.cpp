#include <iostream>
using namespace std;

char GetValueOffset(char (*arr)[5], char baseValue, int yOffset, int xOffset) {
    int baseY = -1, baseX = -1;
    for (int y = 0; y < 3; ++y) {
        for (int x = 0; x < 4; ++x) {
            if (baseValue == arr[y][x]) {
                baseY = y;
                baseX = x;
            }
        }
    }

    int newY = baseY + yOffset;
    int newX = baseX + xOffset;
    if (newY >= 0 && newY <3 && newX >= 0 && newX < 4) {
        return arr[baseY + yOffset][baseX + xOffset];
    }

    return '\0';
}
int main() {
    char table[3][5] = {
        "ATKB",
        "CZFD",
        "HGEI"
    };

    char input;
    cin >> input;

    int y, x;
    cin >> y >> x;

    cout << GetValueOffset(table, input, y, x);
    return 0;
}
