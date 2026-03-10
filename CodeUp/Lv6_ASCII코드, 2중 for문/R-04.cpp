#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if ('a' <= c && c <= 'z' ){
        cout << "소문자입력!!";
    }
    else if ('A' <= c && c <= 'Z'){
        cout << "대문자입력!!";
    }
    else if ('0' <= c && c <= '9')
    {
        cout << "숫자문자입력!!";
    }
    return 0;
}
