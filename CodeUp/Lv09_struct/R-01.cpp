#include <iostream>
using namespace std;

int arrA[] = {2, 1, 2, 4, 5};
int arrB[3][3] = {
        2, 5, 3,
        4, 5, 7,
        8, 7, 2
};

int main()
{
    int num;
    cin >> num;

    int count = 0;
    for (int i = 0; i < size(arrA); ++i)
    {
        if (num == arrA[i]){
            count++;
        }
    }

    for (int i = 0; i < size(arrB); ++i)
    {
        for (int j = 0; j < size(arrB[i]); ++j)
        {
            if (num == arrB[i][j]){
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
