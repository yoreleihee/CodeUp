#include <iostream>
using namespace std;

int main() {
    char vect[4][4] = {
            "DTK",
            "EAP",
            "CQG",
            "PHB"
    };

    int aY = 0;
    int aX = 0;
    int bY = 0;
    int bX = 0;

    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            if (vect[i][j] == 'A'){
                aY = i;
                aX = j;
            }

            if (vect[i][j] == 'B'){
                bY = i;
                bX = j;
            }
        }
    }

    int yDistance = abs(aY - bY);
    int xDistance = abs(aX - bX);
    int result = yDistance + xDistance;

    cout << result;
    return 0;
}
