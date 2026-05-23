#include <iostream>
using namespace std;

class Student {
protected:
    string mName = "";
    int mScore = 0;
public:
    Student(string name, int score) : mName(name), mScore(score) {}
    virtual string GetGrade() = 0;
    virtual ~Student() {}
};

class UndergraduateStudent : public Student {
public:
    UndergraduateStudent(string name, int score) : Student(name, score) {}
    string GetGrade() override {
        return mScore >= 90 ? "A" : "B";
    }
};

class GraduateStudent : public Student {
public:
    GraduateStudent(string name, int score) : Student(name, score) {}
    string GetGrade() override {
        return mScore >= 95 ? "A" : "B";
    }
};

int main()
{
    UndergraduateStudent us("Kim", 92);
    GraduateStudent gs("Lee", 92);
    Student* students[] = { &us, &gs };
    for (int i = 0; i < 2; ++i)
        std::cout << students[i]->GetGrade() << std::endl;

    return 0;
}