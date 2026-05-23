#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double Area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    double mRadius = 0;
public:
    Circle(double radius) : mRadius(radius) {}
    double Area() override {
        return M_PI * mRadius * mRadius;
    }
};

class Square : public Shape {
    double mSide = 0;
public:
    Square(double side) : mSide(side) {}
    double Area() override {
        return mSide * mSide;
    }
};

int main()
{
    Circle c(5.0);
    Square s(4.0);
    Shape* shapes[] = { &c, &s };
    for (int i = 0; i < 2; ++i)
        std::cout << shapes[i]->Area() << std::endl;

    return 0;
}