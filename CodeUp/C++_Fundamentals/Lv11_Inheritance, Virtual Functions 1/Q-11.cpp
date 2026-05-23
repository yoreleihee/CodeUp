#include <iostream>
using namespace std;

class Exercise {
protected:
    int mMinutes = 0;
public:
    Exercise(int minutes) : mMinutes(minutes) {}
    virtual void PrintCalories() = 0;
    virtual ~Exercise() {}
};

class Running : public Exercise {
public:
    Running(int minutes) : Exercise(minutes) {}
    void PrintCalories() override {
        cout << "Running: " << mMinutes * 10 << "kcal" << endl;
    }
};

class Cycling : public Exercise {
public:
    Cycling(int minutes) : Exercise(minutes) {}
    void PrintCalories() override {
        cout << "Cycling: " << mMinutes * 6 << "kcal" << endl;
    }
};

int main()
{
    Running run(30); Cycling cyc(60);
    Exercise* logs[] = { &run, &cyc };
    for (int i = 0; i < 2; ++i)
        logs[i]->PrintCalories();

    return 0;
}