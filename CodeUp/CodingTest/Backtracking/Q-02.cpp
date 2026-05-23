#include <iostream>
using namespace std;

char brackets[] = "()";
char path[17] = {};
int num = 0;

int open = 0;
int close = 0;

void recursive(int level){
    if (level == num * 2){
        cout << path << endl;
        return;
    }

    if (open < num){
        path[level] = '(';
        open++;
        recursive(level + 1);
        path[level] = 0;
        open--;
    }

    if (close < open){
        path[level] = ')';
        close++;
        recursive(level + 1);
        path[level] = 0;
        close--;
    }
}

int main()
{
    cin >> num;
    recursive(0);

    return 0;
}
