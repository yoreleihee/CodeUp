#include <iostream>
using namespace std;

struct Point{
    int y,x;
};

Point points[6] = {};

bool CheckDuplicate(int size){
    for (int i = 0; i < size; ++i)
    {
        if (points[size].x == points[i].x && points[size].y == points[i].y){
            return true;
        }
    }

    return false;
};

int main()
{
    int y, x;
    cin >> y >> x;

    bool isDuplicate = false;
    for (int i = 0; i < 6; ++i)
    {
        cin >> points[i].x >> points[i].y;
        isDuplicate = CheckDuplicate(i);

        if (isDuplicate){
            cout << "중복된좌표발견";
            return 0;
        }
    }

    cout << "중복없음";
    return 0;
}
