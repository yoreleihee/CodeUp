#include <iostream>
using namespace std;

int main() {
    int up[5] = {};
    int down[5] = {};

    for (int i = 0; i < size(up); ++i)
    {
        cin >> up[i];
    }

    for (int i = 0; i < size(down); ++i)
    {
        cin >> down[i];
    }

    int result = 0;
    for (int i = 0; i < 5; ++i)
    {
        if (up[i] != 1 || down[i] != 1){
            continue;
        }
        if (up[i] == down [i]){
            result++;
        }
    }

    cout << result << "개";
    return 0;
}
