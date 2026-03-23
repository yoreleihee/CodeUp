#include <iostream>
using namespace std;

int vect[2][6] = {
        4, 5, 6, 1, 3, 1,
        2, 1, 3, 6, 3, 6
};

void Input(int *a, int *b, int *c){
    cin >> *a >> *b >> *c;
}

int process(int a, int b, int c, int *aCount, int *bCount, int *cCount){
    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            if (a == vect[i][j]){
                *aCount += 1;
            }

            if (b == vect[i][j]){
                *bCount += 1;
            }

            if (c == vect[i][j]){
                *cCount += 1;
            }
        }
    }
}

void output(int a, int b, int c, int aCount, int bCount, int cCount){
    cout << a << "=" << aCount << "개" << endl;
    cout << b << "=" << bCount << "개" << endl;
    cout << c << "=" << cCount << "개" << endl;
}
int main()
{
    int a, b, c;
    Input(&a, &b, &c);

    int aCount = 0, bCount = 0, cCount = 0;
    process(a, b, c, &aCount, &bCount, &cCount);

    output(a, b, c, aCount, bCount, cCount);
    return 0;
}
