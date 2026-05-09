#include <iostream>
using namespace std;

int main()
{
    char vect[5][5] = {};

    int level = 1;
    for (int i = 0; i < size(vect); ++i)
    {
        cin >> vect[i];

        if (strcmp(vect[i], "up") == 0){
            level++;
        } else{
            level--;
        }
    }

    if (level <= 0){
        cout << 'B' << abs(level) + 1;
    } else{
        cout << level;
    }
    return 0;
}
