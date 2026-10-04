#include <iostream>
using namespace std;

int direct[4][2] = {
        -1, 0, // up
        1, 0, // down
        0, -1, // left
        0, 1 // right
};

char board[5][4] = {
        "___",
        "___",
        "ATK",
        "___",
        "___"
};

bool isValidPosition(int y, int x){
    return (y >= 0 && y < size(board) && x >= 0 && x < size(board[0]));
}

void findModelPosition(char model, int* y, int* x){
    for (int i = 0; i < size(board); ++i)
    {
        int len = strlen(board[i]);
        for (int j = 0; j < len; ++j)
        {
            if (model == board[i][j]){
                *y = i;
                *x = j;

                return;
            }
        }
    }
}

void moveModel(int modelY, int modelX, int dir[2]){
    int newY = modelY + dir[0];
    int newX = modelX + dir[1];
    if (!isValidPosition(newY, newX)){
        return;
    }

    swap(board[modelY][modelX], board[newY][newX]);
}
int main() {
    for (int i = 0; i < 7; ++i)
    {
        char model;
        string direction;
        cin >> model >> direction;

        int modelY;
        int modelX;

        findModelPosition(model, &modelY, &modelX);

        if (direction == "UP"){
            moveModel(modelY, modelX, direct[0]);
        }
        else if (direction == "DOWN"){
            moveModel(modelY, modelX, direct[1]);
        }
        else if (direction == "LEFT"){
            moveModel(modelY, modelX, direct[2]);
        }
        else if (direction == "RIGHT"){
            moveModel(modelY, modelX, direct[3]);
        }
    }

    for (int i = 0; i < size(board); ++i)
    {
        int len = strlen(board[i]);
        for (int j = 0; j < len; ++j)
        {
            cout << board[i][j];
        }

        cout << endl;
    }
    return 0;
}
