#include <iostream>
using namespace std;

char aToZ(){
    char input;
    cin >> input;

    if (input - 'A' <= 12){
        return 'A';
    }
    else{
        return 'Z';
    }
}

int main()
{
    char result = aToZ();

    cout << result;
    return 0;
}
