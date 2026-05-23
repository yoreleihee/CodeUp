#include <iostream>
using namespace std;

class Employee {
protected:
    string mName = "";
    int mSalary = 0;

public:
    Employee(string name, int salary) : mName(name), mSalary(salary){}
    virtual int CalculateSalary() = 0;

    virtual ~Employee() {}
};

class Manager : public Employee{
public:
    int CalculateSalary() override {
        return mSalary * 1.5;
    }

    Manager(string name, int salary) : Employee(name, salary) {}
};

class Developer : public Employee{
public:
    int CalculateSalary() override {
        return mSalary * 1.1;
    }

    Developer(string name, int salary) : Employee(name, salary) {}
};

int main()
{
    Manager m("Kim", 5000); Developer d("Lee", 3000);
    Employee* staff[] = { &m, &d };
    for (int i = 0; i < 2; ++i)
        std::cout << staff[i]->CalculateSalary() << std::endl;

    return 0;
}
