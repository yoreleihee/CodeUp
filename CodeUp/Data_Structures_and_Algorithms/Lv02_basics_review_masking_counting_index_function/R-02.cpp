#include <iostream>
using namespace std;

int main() {
    int input[4];

    for (int i = 0; i < size(input); ++i)
    {
        cin >> input[i];
    }

    int password[] = {3, 7, 4, 9};
    bool isSame = equal(input, input + 4, password);

    cout << (isSame ? "pass" : "fail");
    return 0;
}
