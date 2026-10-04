#include <iostream>
using namespace std;

int arr[4][4] = {
        0, 0, 0, 0,
        0, 1, 1, 0,
        2, 2, 3, 0,
        1, 3, 3, 1
};

int main()
{
    for (int x = 0; x < 4; ++x)
    {
        for (int y = 1; y < size(arr); ++y)
        {
            if (arr[y][x] > arr[y - 1][x]){
                cout << "안전하지않은성";
                return 0;
            }
        }
    }

    cout << "안전한성";
    return 0;
}
