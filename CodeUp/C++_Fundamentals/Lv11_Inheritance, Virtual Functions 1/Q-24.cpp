#include <iostream>
using namespace std;

class IDrawable {
public:
    virtual void Draw() = 0;
    virtual ~IDrawable() {}
};

class Circle : public IDrawable {
    int mRadius;
public:
    Circle(int radius) : mRadius(radius) {}
    void Draw() override {
        cout << "원 그리기 (반지름:" << mRadius << ")" << endl;
    }
};

class Rectangle : public IDrawable {
    int mWidth, mHeight;
public:
    Rectangle(int width, int height) : mWidth(width), mHeight(height) {}
    void Draw() override {
        cout << "사각형 그리기 (" << mWidth << "x" << mHeight << ")" << endl;
    }
};

int main()
{
    Circle c(5); Rectangle r(4, 3);
    IDrawable* drawables[] = { &c, &r };
    for (int i = 0; i < 2; ++i)
        drawables[i]->Draw();

    return 0;
}