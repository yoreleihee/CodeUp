#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if (a == 1111 && b == 2222){
        cout << "로그인성공";
    }
    else if (a != 1111){
        cout << "아이디가 틀렸습니다";
    }
    else{
        cout << "비밀번호가 틀렸습니다";
    }

    return 0;
}