#include <iostream>
using namespace std;

class Employee {
    char* pName;
    char* pDepartment;
    int mBaseSalary;
    int mYears;
    float mBonusRate;

public:
    Employee(char* name, char* department, int baseSalary, int years, float bonusRate) {
        pName = name;
        pDepartment = department;
        mBaseSalary = baseSalary;
        mYears = years;
        mBonusRate = bonusRate;
    }

    float Total() {
        return mBaseSalary + mBaseSalary * (mBonusRate / 100);
    }

    void PrintInfo() {
        cout << "Employee: " << pName << " | Department: " << pDepartment << " | Years: " << mYears << endl;
        cout << "Base: " << mBaseSalary << ", Bonus: " << mBonusRate << "%" << endl;
        cout << "Total Salary: " << Total();
    }
};

int main() {
    Employee employee((char*)"Jane", (char*)"HR", 3000, 5, 15);
    employee.PrintInfo();
    return 0;
}
