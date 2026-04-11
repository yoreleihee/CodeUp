#include <iostream>
using namespace std;

class Circle {
    float mRadius;
    char* pColor;
    char* pFilled;
    float mOpacity;
public:
    Circle(float radius, char* color, char* filled, float opacity) {
        mRadius = radius;
        pColor = color;
        pFilled = filled;
        mOpacity = opacity;
    }

    float Area()
    {
        return 3.14 * mRadius * mRadius;
    }

    float Circumference() {
        return 3.14 * 2 * mRadius;
    }
    void PrintInfo() {
        cout << "Circle" << endl;
        cout << "Radius: " << mRadius << endl;
        cout << "Color: " << pColor << endl;
        cout << "Filled: " << pFilled << endl;
        cout << "Opacity: " << mOpacity << endl;
        cout << "Area: " << Area() << endl;
        cout << "Circumference: " << Circumference() << endl;

    }
};
int main() {
    Circle circle(5, (char*)"Red", (char*)"Yes", 0.75);
    circle.PrintInfo();
    return 0;
}
