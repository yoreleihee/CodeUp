#include <iostream>
using namespace std;

int vect[3][4] = {0};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < size(vect[0]); i++) {
        vect[0][i] = a++;
        vect[1][i] = b++;
        vect[2][i] = c++;
    }

    for (int j = 0; j < size(vect); j++) {
        for (int i = 0; i < size(vect[j]); i++) {
            cout << vect[j][i] << " ";
        }

        cout << endl;
    }

    return 0;
}
