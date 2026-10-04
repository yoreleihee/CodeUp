#include <iostream>
using namespace std;

bool isUpper(char c){
    return (c >= 'A' && c <= 'Z');
}
int main()
{
    char* a = new char;
    char* b = new char;
    char* c = new char;

    cin >> *a >> *b >> *c;

    if (isupper(*a) && isupper(*b) && isupper(*c)){
        cout << "모두대문자";
    } else{
        cout << "소문자있음";
    }

    delete a;
    delete b;
    delete c;
    return 0;
}