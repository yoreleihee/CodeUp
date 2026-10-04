#include <iostream>
using namespace std;

char path[4] = {};
char str[] = "OX";

void recursive(int level){
    if (level == 3){
        int winCount = 0;
        int loseCount = 0;
        for (int i = 0; i < strlen(path); ++i)
        {
            if (path[i] == 'O'){
                winCount++;
            } else{
                loseCount++;
            }
        }
        if (winCount > 0){
            cout << winCount << "승";
        }
        if (loseCount > 0){
            cout << loseCount << "패";
        }

        cout << "(";
        for (int i = 0; i < strlen(path); ++i)
        {
            if (path[i] == 'O')
            {
                cout << "승";
            } else
            {
                cout << "패";
            }
        }
        cout << ")" << endl;
        return;
    }

    for (int i = 0; i < strlen(str); ++i)
    {
        path[level] = str[i];
        recursive(level + 1);
        path[level] = 0;
    }
}

int main()
{
    recursive(0);

    return 0;
}
