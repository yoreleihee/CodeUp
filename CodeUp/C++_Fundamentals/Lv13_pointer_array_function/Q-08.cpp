#include <iostream>
using namespace std;

struct Profile{
    char name[7];
    int age;
    int weight;
};

int main()
{
    Profile int1;
    Profile int2;

    cin >> int1.name >> int1.age >> int1.weight;
    cin >> int2.name >> int2.age >> int2.weight;

    cout << int1.name << " & " << int2.name << endl;
    cout << "평균" << (int1.age + int2.age) / 2 << "세";

    return 0;
}
