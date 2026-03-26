#include <iostream>
using namespace std;

int main()
{
    char table[3][10] = {
        "BBQWORLD",
        "KFCAPPLE",
        "LOT"
    };

    char input;
    cin >> input;

    int count = 0;
    for (int i = 0; i < size(table); ++i) {
        int j = 0;
        while (table[i][j] != '\0') {
            if (table[i][j] == input) {
                count++;
            }

            j++;
        }
    }

    cout << count;
    return 0;
}
