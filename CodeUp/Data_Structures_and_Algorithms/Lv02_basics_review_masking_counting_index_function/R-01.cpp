#include <iostream>
using namespace std;

int main() {
    int vect[] = {3, 5, 4, 2, 6, 6, 5};
    int bit[] = {0, 1, 1, 0, 1, 1, 0};

    for (int i = 0; i < 7; ++i)
    {
        if (bit[i] == 1){
            vect[i] = 7;
        }
        else{
            vect[i] = 0;
        }

        cout << vect[i];
    }

    return 0;
}
