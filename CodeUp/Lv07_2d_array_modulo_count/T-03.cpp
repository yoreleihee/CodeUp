#include <iostream>
using namespace std;

char a, b;

void input(){
    cin >> a >> b;
}

void output(){
    if ('A' <= a && a <='Z'){
        if ('A' <= b && b <='Z'){
            cout << "대문자들";
        } else{
            cout << "대소문자";
        }
    } else{
        if ('A' <= b && b <='Z'){
            cout << "대소문자";
        } else{
            for (int i = 'a'; i <= 'z'; ++i)
            {
                cout << (char)i;
            }
        }
    }
}
int main()
{
    input();
    output();

    return 0;
}
