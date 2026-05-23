#include <iostream>
using namespace std;

string phone[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
string digits = {};
char path[5] = {};

void recursive(int level){
    if (level == digits.length()){
        cout << path << endl;
        return;
    }
    int num = digits[level] - '0';
    string str = phone[num];

    for (int i = 0; i < str.length(); ++i)
    {
        path[level] = str[i];
        recursive(level + 1);
        path[level] = 0;
    }
}
int main()
{
    cin >> digits;
    recursive(0);

    return 0;
}
