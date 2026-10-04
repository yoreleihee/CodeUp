#include <iostream>
using namespace std;

int map[3][3] = {
        3, 5, 4,
        1, 1, 2,
        1, 3, 9
};

bool isValidPosition(int y, int x){
    return (y >= 0 && y < size(map) && x >= 0 && x < size(map[0]));
}

int main() {
    int y, x;
    cin >> y >> x;

    int direct[4][2] = {
            -1, 0, // up
            1, 0, // down
            0, -1, // left
            0, 1 // right
    };

    int sum = 0;
    for (int i = 0; i < size(direct); ++i)
    {
        int newY = y + direct[i][0];
        int newX = x + direct[i][1];

        if (isValidPosition(newY, newX)){
            sum += map[newY][newX];
        }
    }

    cout << sum;

    return 0;
}
