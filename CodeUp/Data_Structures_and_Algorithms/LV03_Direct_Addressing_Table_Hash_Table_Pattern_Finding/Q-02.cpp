#include <iostream>
using namespace std;

int main() {
    int ids[65535] = {};

    int attendanceList[] = {
            65000, 35, 42, 70,
            70, 35, 65000, 1300,
            65000, 30000, 38, 42
    };

    for (int i = 0; i < size(attendanceList); ++i)
    {
        int idx = attendanceList[i];

        ids[idx]++;
    }

    int maxIds = ids[0];
    for (int i = 0; i < size(ids); ++i)
    {
        if (ids[maxIds] < ids[i]){
            maxIds = i;
        }
    }

    cout << maxIds;
    return 0;
}
