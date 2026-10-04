#include <iostream>
using namespace std;

int main() {
    int G;
    cin >> G;

    int* p = &G;
    int* k = &G;

    int** t = &p;
    int** Q = &k;

    cout << **t << " " << *k;

    return 0;
}
