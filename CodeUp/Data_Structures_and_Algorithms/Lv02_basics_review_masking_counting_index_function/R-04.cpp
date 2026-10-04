#include <iostream>
using namespace std;

int map[2][3] = {
        3, 55, 42,
        -5, -9, -10
};

void checkContain(int* arr){
    for (int i = 0; i < 2; ++i)
    {
        bool isContain = false;
        for (int y = 0; y < size(map); ++y)
        {
            for (int x = 0; x < size(map); ++x)
            {
                if (arr[i] == map[y][x]){
                    isContain = true;
                }
            }
        }
        cout << (isContain ? "Y" : "N") << " ";
    }
}
int main() {
    int pix[2][2] = {};
    for (int i = 0; i < size(pix); ++i)
    {
        for (int j = 0; j < size(pix[i]); ++j)
        {
            cin >> pix[i][j];
        }
    }

    checkContain(pix[0]);
    cout << endl;
    checkContain(pix[1]);

    return 0;
}
