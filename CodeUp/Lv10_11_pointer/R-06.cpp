#include <iostream>
using namespace std;

struct BBQ {
    int x;
    int data[3];
};

int main()
{
    BBQ g;
    cin >> g.x;

    int sum = 0;
    for (int i = 0; i < size(g.data); ++i) {
        cin >> g.data[i];

        sum += g.data[i];
    }

    cout << sum << " " << g.x;

    return 0;
}
