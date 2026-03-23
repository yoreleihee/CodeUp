#include <iostream>
using namespace std;

void output(char c){
    cout << "문자" << "'" << c << "'" << "의 아스키코드값은 " << (int)c;
}
int main()
{
    char a, b;
    cin >> a >> b;

    output(a);
    cout << endl;
    output(b);

    return 0;
}
