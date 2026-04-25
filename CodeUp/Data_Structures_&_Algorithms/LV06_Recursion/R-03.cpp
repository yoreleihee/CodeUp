#include <iostream>
using namespace std;

char arr[10] = {};
int len = 0;

bool isValidPosition(int idx){
    return (idx >= 0 && idx < len);
}

void setChar(int idx){
    if (isValidPosition(idx - 1)){
        arr[idx - 1] = '#';
    }
    if (isValidPosition(idx + 1)){
        arr[idx + 1] = '#';
    }
}
int main() {

    char a, b;
    cin >> arr >> a >> b;

    len = strlen(arr);

    int aIdx = 0;
    int bIdx = 0;
    for (int i = 0; i < len; ++i)
    {
        if (a == arr[i]){
            aIdx = i;
        }

        if (b == arr[i]){
            bIdx = i;
        }
    }

    setChar(aIdx);
    setChar(bIdx);

    for (int i = 0; i < len; ++i)
    {
        cout << arr[i];
    }
    return 0;
}
