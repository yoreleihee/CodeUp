#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char c;
    cin >> a >> b >> c;

    for (int z = 0; z < a; ++z) {
        for (int y = 0; y < a; ++y) {
            for (int x = 0; x < b; ++x) {
                cout << c;
            }
            cout << endl;
        }
    }
    return 0;
}