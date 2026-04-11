#include <iostream>
using namespace std;

class Person {
    char *mName;
    int mAge;
    char *mGender;
    char *mNationality;

public:
    Person(char *name, int age, char *gender, char *nationality) {
        mName = name;
        mAge = age;
        mGender = gender;
        mNationality = nationality;
    }
    void Introduce() {
        cout << "My name is " << mName << ", " << mAge << " years old, " << mGender
            << ", from " << mNationality << ".";
    }
};
int main() {
    Person person((char*)"Alice", 25, (char*)"Female", (char*)"Canada");
    person.Introduce();
    return 0;
}
