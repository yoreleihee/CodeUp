#include <iostream>
using namespace std;

char arr[3][3] = {
        'A', 'D', 'F',
        'Q', 'W', 'E',
        'Z', 'X', 'C'
};

void Find(char target, int *y, int *x){
    for (int i = 0; i < size(arr); ++i)
    {
        for (int j = 0; j < size(arr[i]); ++j)
        {
            if (target == arr[i][j]){
                *y = i;
                *x = j;
                return;
            }
        }
    }
}
int main()
{
    char target;
    cin >> target;

    int y = -1;
    int x = -1;
    Find(target, &y, &x);

    cout << y << "," << x;
    return 0;
}
