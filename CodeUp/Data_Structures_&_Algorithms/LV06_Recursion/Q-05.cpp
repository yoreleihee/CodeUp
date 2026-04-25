#include <iostream>
using namespace std;

int main() {
    char vect[3][11] = {};

    int maxLen = INT_MIN;
    int maxLenIdx = 0;

    for (int i = 0; i < size(vect); ++i)
    {
        cin >> vect[i];

        int len = strlen(vect[i]);
        if (maxLen < len){
            maxLen = len;
            maxLenIdx = i;
        }
    }

    swap(vect[0], vect[maxLenIdx]);


    for (int i = 0; i < size(vect); ++i)
    {
        int len = strlen(vect[i]);
        for (int j = 0; j < len; ++j)
        {
            cout << vect[i][j];
        }

        cout << endl;
    }
    return 0;
}
