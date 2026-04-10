#include <iostream>
using namespace std;

int main() {
    int levelTable[4][2] = {
            10, 20,
            30, 60,
            100, 150,
            200, 300
    };

    int fruitsKcal[6] = {};

    for (int i = 0; i < size(fruitsKcal); ++i)
    {
        cin >> fruitsKcal[i];
    }

    for (int y = 0; y < size(levelTable); ++y)
    {
        int count = 0;

        for (int i = 0; i < size(fruitsKcal); ++i)
        {
            if (levelTable[y][0] <= fruitsKcal[i] && fruitsKcal[i] <= levelTable[y][1]){
                count++;
            }
        }

        cout << "lev" << y << ":" << count << endl;
    }

    return 0;
}
