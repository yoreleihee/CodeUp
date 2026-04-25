#include <iostream>
using namespace std;

int main() {
    char id[] = "qlqlaqkq";
    char password[] = "tkaruqtkf";

    char inputId[10] = {};
    char inputPassword[10] = {};

    cin >> inputId >> inputPassword;

    bool isCorrectId = false;
    bool isCorrectPassword = false;

    if (strcmp(id, inputId) == 0){
        isCorrectId = true;
    }
    if (strcmp(password, inputPassword) == 0){
        isCorrectPassword = true;
    }

    if (isCorrectId && isCorrectPassword){
        cout << "LOGIN";
    } else{
        cout << "INVALID";
    }

    return 0;
}
