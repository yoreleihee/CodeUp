#include <iostream>
using namespace std;

char table[3][3] = {
        'D', 'A', 'S',
        'Q', 'W', 'V',
        'R', 'T', 'Y'
};

void Find(int y1, int x1, int y2, int x2, char *result1, char *result2){
    *result1 = table[y1][x1];
    *result2 = table[y2][x2];
}
int main()
{
    int y1, x1;
    int y2, x2;

    cin>> y1 >> x1 >> y2 >> x2;

    char result1;
    char result2;
    Find(y1, x1, y2, x2, &result1, &result2);

    cout << result1 << " " << result2;

    return 0;
}
