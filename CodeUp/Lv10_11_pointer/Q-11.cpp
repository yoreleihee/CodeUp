#include <iostream>
using namespace std;

char aToZ(){
    int input;
    cin >> input;

    if (input >= 90){
        return 'A';
    }
    else if (input >= 80){
        return 'B';
    }
    else if (input >= 70){
        return 'C';
    } else{
        return 'D';
    }
}

int main()
{
    char result = scoring();

    cout << result;
    return 0;
}
