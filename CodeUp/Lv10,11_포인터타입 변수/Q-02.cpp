#include <iostream>
using namespace std;

char getChar(){
    char a, b;
    cin >> a >> b;

    if (a > b){
        return a;
    } else{
        return b;
    }
}
int main()
{
    char result = getChar();

    cout << result;
    return 0;
}
