#include <iostream>
using namespace std;

class Rectangle {
    float width;
    float height;
    int borderThickness;
    char* pColor;

public:
    Rectangle(float width, float height, int borderThickness, char* color) {
        this->width = width;
        this->height = height;
        this->borderThickness = borderThickness;
        pColor = color;
    }

    void PrintInfo() {
        cout << "Color: " << pColor << ", Border: " << borderThickness << "px" << endl;
        cout << "Area: " << width * height << ", Perimeter: " << 2 * (width + height);
    }
};
int main() {
    Rectangle rectangle(10, 20, 2, (char*)"Blue");
    rectangle.PrintInfo();
    return 0;
}
