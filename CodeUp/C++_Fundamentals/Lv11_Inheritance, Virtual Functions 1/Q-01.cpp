#include <iostream>
using namespace std;

class Animal{
protected:
    string mName = "";
    string mSpeak = "";

public:
    virtual void Speak(){
        cout << mName << ':' << mSpeak << endl;
    }

    Animal(string name, string speak) : mName(name), mSpeak(speak) {}

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    Dog(string name) : Animal(name, "Woof") {}
};

class Cat : public Animal {
public:
    Cat(string name) : Animal(name, "Meow") {}
};

int main()
{
    Dog d1("Baekgu"); Cat c1("Nabi");
    Animal* animals[] = { &d1, &c1 };
    for (int i = 0; i < 2; ++i)
        animals[i]->Speak();

    return 0;
}
