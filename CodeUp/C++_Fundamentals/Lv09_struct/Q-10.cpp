#include <iostream>
using namespace std;

char arr[5];

void checkChar(char c){
    if ('a' <= c && c <= 'z'){
        cout << "소";
    }
    else if ('A' <= c && c <= 'Z'){
        cout << "대";
    }
}
int main()
{
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
        checkChar(arr[i]);
    }

    return 0;
}
