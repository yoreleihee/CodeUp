#include <iostream>
using namespace std;

int main()
{
    char arr[] = "StructPointer";

    char input;
    cin >> input;

    for (int i = 0; i < size(arr); ++i) {
        if (input == arr[i]) {
            cout << "뱔견";
            return 0;
        }
    }

    cout << "미발견";
    return 0;
}
