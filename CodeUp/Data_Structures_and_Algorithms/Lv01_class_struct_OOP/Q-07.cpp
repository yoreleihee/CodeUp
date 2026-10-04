#include <iostream>
using namespace std;

void isExist(char* arr, char target) {
    for (int i = 0; i < strlen(arr); ++i) {
        if (target == arr[i]) {
            cout << "발견";
            return;
        }
    }

    cout << "미발견";
}
int main()
{
    char arr[5] = "MTKC";
    
    char target;
    cin >> target;

    isExist(arr, target);

    return 0;
}