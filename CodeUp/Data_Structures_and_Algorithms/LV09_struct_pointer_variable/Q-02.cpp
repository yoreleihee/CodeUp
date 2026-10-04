#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c>> d>> e;
    int* pArr[] = {&a, &b, &c, &d, &e};

    int min = INT_MAX;
    int max = 0;

    for (int i = 0; i < size(pArr); ++i)
    {
        int num = *pArr[i];
        if (min > num){
            min = num;
        }
        if (max < num){
            max = num;
        }
    }

    cout << "MAX:" << max << endl;
    cout << "MIN:" << min << endl;
    return 0;
}
