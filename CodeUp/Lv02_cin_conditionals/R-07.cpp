#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int average = (a+b+c+d) / 4;

    if (a > average){
        cout << a << ">" << average << endl;
    }
    else if (a < average){
        cout << a << "<" << average << endl;
    }
    else if ( a == average){
        cout << a << "==" << average << endl;
    }

    if (b > average){
        cout << b << ">" << average << endl;
    }
    else if (b < average){
        cout << b << "<" << average << endl;
    }
    else if ( b == average){
        cout << b << "==" << average << endl;
    }

    if (c > average){
        cout << c << ">" << average << endl;
    }
    else if (c < average){
        cout << c << "<" << average << endl;
    }
    else if ( c == average){
        cout << c << "==" << average << endl;
    }

    if (d > average){
        cout << d << ">" << average << endl;
    }
    else if (d < average){
        cout << d << "<" << average << endl;
    }
    else if ( d == average){
        cout << d << "==" << average << endl;
    }

    return 0;
}