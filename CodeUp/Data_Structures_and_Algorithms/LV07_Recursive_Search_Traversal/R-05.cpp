#include <iostream>
using namespace std;

int main()
{
    char a, b;

    cin >> a >> b;

    char map[3][7] = {
            "354223",
            "133342",
            "544235"
    };

    char price[6] = "TPGKC";

    int y = a - 'A';
    int x = b - '1';

    int priceIdx = map[y][x] - '1';
    cout << price[priceIdx];
    return 0;
}
