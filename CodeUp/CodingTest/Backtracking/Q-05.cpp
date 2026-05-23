#include <iostream>
using namespace std;

char board[3][5] = {
        "ABCE",
        "SFCS",
        "ADEE"
};
string word = "ABCB";
int direct[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int visited[3][4] = {};
bool isExist = false;

bool isValid(int y, int x){
    return (y >= 0 && y < size(board) && x >= 0 && x < strlen(board[0]));
}

void recursive(int y, int x, int wordIdx){
    if (wordIdx == word.length()){
        isExist = true;
        return;
    }
    for (int i = 0; i < size(direct); ++i)
    {
        int newY = y + direct[i][0];
        int newX = x + direct[i][1];

        if (!isValid(newY, newX)){
            continue;
        }

        if (visited[newY][newX] == 1){
            continue;
        }

        if (board[newY][newX] != word[wordIdx]){
            continue;
        }

        visited[newY][newX] = 1;
        recursive(newY, newX, wordIdx + 1);
        visited[newY][newX] = 0;
    }
}

int main()
{
    for (int i = 0; i < size(board); ++i){
        for (int j = 0; j < strlen(board[i]); ++j){
            if (board[i][j] == word[0])
            {
                visited[i][j] = 1;
                recursive(i, j, 1);
            }
        }
    }

    if (!isExist)
    {
        cout << "false";
    } else{
        cout << "true";
    }

    return 0;
}
