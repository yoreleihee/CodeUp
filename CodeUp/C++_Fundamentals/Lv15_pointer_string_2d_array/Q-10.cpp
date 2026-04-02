#include <iostream>
using namespace std;

int main()
{
    char arr[] = "ABCZETQ";
    char blackList[5] = {};

    cin >> blackList;

    for (int i = 0; i < size(blackList); ++i) {
        bool isVillager = false;
        for (int j = 0; j < size(arr); ++j) {
            if (blackList[i] == arr[j]) {
                isVillager = true;
                break;
            }
        }

        if (isVillager) {
            cout << blackList[i] << "=" << "마을사람" << endl;
        }
        else {
            cout << blackList[i] << "=" << "외부사람" << endl;
        }

    }
    return 0;
}
