#include <iostream>
using namespace std;

int main()
{
    char vect[3][11] = {};

    for (int i = 0; i < size(vect); ++i)
    {
        cin >> vect[i];
    }

    int count = 0;
    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect); ++j)
        {
            if (i == j || i > j){
                continue;
            }

            if (strcmp(vect[i], vect[j]) == 0){
                count++;
            }
        }
    }

    switch (count)
    {
        case 3:
            cout << "WOW";
            break;

        case 1:
            cout << "GOOD";
            break;

        case 0:
            cout << "BAD";
            break;
    }
    return 0;
}
