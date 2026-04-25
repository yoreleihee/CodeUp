#include <iostream>
using namespace std;

int main() {
    int direct[4][2] = {
            -1, 0, // up
            1, 0, // down
            0, -1, // left
            0, 1 // right
    };

    int y = 5;
    int x = 5;

    int inputCount = 0;
    cin >> inputCount;

    for (int i = 0; i < inputCount; ++i)
    {
        string action;
        cin >> action;

        if (action == "up"){
            y += direct[0][0];
            x += direct[0][1];
        }
        else if (action == "down"){
            y += direct[1][0];
            x += direct[1][1];
        }
        else if (action == "left"){
            y += direct[2][0];
            x += direct[2][1];
        }
        else if (action == "right"){
            y += direct[3][0];
            x += direct[3][1];
        }
        else{ // 클릭
            cout << y << "," << x;
        }
    }
    return 0;
}
