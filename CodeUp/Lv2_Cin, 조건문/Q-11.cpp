#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;

    if (num > 0){
        cout << "###\n" << "###\n" << "###\n";
    }
    else if (num < 0){
        cout << "$$$\n" << "$$$\n";
    }
}