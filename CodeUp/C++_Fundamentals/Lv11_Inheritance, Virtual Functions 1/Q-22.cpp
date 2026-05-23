#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double Area() = 0;
    virtual double Perimeter() = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
    double mWidth, mHeight;
public:
    Rectangle(double width, double height) : mWidth(width), mHeight(height) {}
    double Area() override { return mWidth * mHeight; }
    double Perimeter() override { return 2 * (mWidth + mHeight); }
};

class Circle : public Shape {
    double mRadius;
public:
    Circle(double radius) : mRadius(radius) {}
    double Area() override { return M_PI * mRadius * mRadius; }
    double Perimeter() override { return 2 * M_PI * mRadius; }
};

class Triangle : public Shape {
    double mA, mB, mC;
public:
    Triangle(double a, double b, double c) : mA(a), mB(b), mC(c) {}
    double Area() override {
        double s = (mA + mB + mC) / 2;
        return sqrt(s * (s - mA) * (s - mB) * (s - mC));
    }
    double Perimeter() override { return mA + mB + mC; }
};

int main()
{
    Rectangle r(4, 5);
    Circle c(3);
    Triangle t(3, 4, 5);
    Shape* shapes[] = { &r, &c, &t };
    for (int i = 0; i < 3; ++i) {
        std::cout << "Area: " << shapes[i]->Area() << std::endl;
        std::cout << "Perimeter: " << shapes[i]->Perimeter() << std::endl;
    }

    return 0;
}