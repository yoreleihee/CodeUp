#include <iostream>
using namespace std;

bool isSame(char* name1, char* name2, int name1Len, int name2Len) {
    int i = 0;
    while (i < name1Len && i < name2Len) {
        if (name1[i] != name2[i]) {
            return false;
        }

        i++;
    }

    return name1Len == name2Len;
}

int main() {
    char name1[20] = {};
    char name2[20] = {};
    cin >> name1 >> name2;

    bool result = isSame(name1, name2, strlen(name1), strlen(name2));
    cout << (result ? "동명" : "남남");
    return 0;
}
