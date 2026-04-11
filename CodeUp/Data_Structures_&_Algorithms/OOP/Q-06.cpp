#include <iostream>
using namespace std;

class Point {
    char mTag;
    int mX;
    int mY;
    int mZ;

public:
    Point(char tag, int x, int y, int z) {
        mTag = tag;
        mX = x;
        mY = y;
        mZ = z;
    }

    void PrintInfo() {
        cout << "Point Tag: " << mTag << " | " << "Coordinates: (" << mX << ", " << mY << ", " << mZ << ")";

    }
};
int main() {
    Point point('A', 3, 4, 7);
    point.PrintInfo();
    return 0;
}
