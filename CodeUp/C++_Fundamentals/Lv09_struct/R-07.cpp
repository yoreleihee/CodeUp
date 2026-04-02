#include <iostream>
using namespace std;

struct PROJECT{
    int num;
    char id;
    int vect[4];
};

int main()
{
    PROJECT z;

    int num;
    cin >> num;

    if (100 <= num){
        z = {
                10,
                'Q',
                {9, 1, 6, 2}
        };
    }
    else if (10 <= num){
        z = {
                8,
                'T',
                {5, 1, 2, 3}
        };
    }
    else{
        z = {
                5,
                'G',
                {1, 2, 3, 4}
        };
    }

    cout << z.num << endl;
    cout << z.id << endl;
    for (int i = 0; i < size(z.vect); ++i)
    {
        cout << z.vect[i] << " ";
    }
    return 0;
}
