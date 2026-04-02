#include <iostream>
using namespace std;

char arr1[] = {'B', 'D', '5', 'Q', 'A'};
char arr2[] = {'Q', 'E', 'R', 'E', 'F'};

char c;
void input(){
    cin >> c;
}

void output(){
    if ('a' <= c && c <= 'z'){
        for (int i = 0; i < size(arr1); ++i)
        {
            cout << arr1[i];
        }
    }
    else if ('A' <= c && c <= 'Z'){
        for (int i = 0; i < size(arr2); ++i)
        {
            cout << arr1[i];
        }
    }
    else if ('0' <= c && c <= '9'){
        for (int i = 'H'; i >= 'A'; --i)
        {
            cout << (char)i;
        }
    }
}
int main()
{
    input();
    output();
    return 0;
}
