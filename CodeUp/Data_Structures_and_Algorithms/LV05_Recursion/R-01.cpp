#include <iostream>
using namespace std;

class Tower {
    int height;
    int width;

public:
    Tower() : height(1), width(1) {}
    Tower(int height) : height(height), width(1) {}
    Tower(int height, int width) : height(height), width(width) {}

    int getHeight() { return height; }
};

int main() {
    Tower myTower;
    Tower seoulTower(100);

    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;

    return 0;
}