#include <iostream>
using namespace std;

int direct[4][2] = {
        -1, 0, // up
        1, 0, // down
        0, -1, // left
        0, 1 // right
};

//    0 = 빈칸
//    1 = 흰돌
//    2 = 검은돌
int board[7][7] = {
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 1, 0, 0},
        {0, 1, 2, 0, 2, 1, 0},
        {0, 0, 1, 2, 1, 0, 0},
        {0, 0, 2, 1, 0, 1, 0},
        {0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
};

bool isValidPosition(int y, int x){
    return (y >= 0 && y < size(board) && x >= 0 && x < size(board[0]));
}
bool canCapture(int blackY, int blackX){
    for (int i = 0; i < size(direct); ++i)
    {
        int newY = blackY + direct[i][0];
        int newX = blackX + direct[i][1];
        if (!isValidPosition(newY, newX)){
            return false;
        }

        if (board[newY][newX] == 0 || board[newY][newX] == 2) // 비어있거나 검은돌
        {
            return false;
        }
    }

    return true;
}

int main() {
    int whiteY, whiteX;
    cin >> whiteY >> whiteX;

    board[whiteY][whiteX] = 1;

    int result = 0;
    for (int i = 0; i < size(board); ++i)
    {
        for (int j = 0; j < size(board[i]); ++j)
        {
            if (board[i][j] == 2) // 겸은돌 발견
            {
                if (canCapture(i, j)){
                   result++;
                }
            }
        }
    }

    cout << result;
    return 0;
}
