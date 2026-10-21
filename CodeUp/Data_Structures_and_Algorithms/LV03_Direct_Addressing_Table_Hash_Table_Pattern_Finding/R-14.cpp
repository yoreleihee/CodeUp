#include <iostream>
#include <unordered_map>
using namespace std;

// hash 함수 구현
long long myHashFunction(string str) {
    long long result = 0;

    for (char ch : str) {
        result = result * 26 + ch;
    }

    return result;
}
int main() {
    string str;
    cin >> str;

    cout << myHashFunction(str);

    return 0;
}
