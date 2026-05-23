#include <iostream>
using namespace std;

class Shape{
public:
    virtual float Area(){

    }
};

class Circle : public Shape{
    float radius;

public:
    Circle(float radius){
        this->radius = radius;
    }

    float Area() override{
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape{
    float width;
    float height;

public:
    Rectangle(float width, float height){
        this->width = width;
        this->height = height;
    }

    float Area() override{
        return width * height;
    }
};

int main()
{
    return 0;
}
