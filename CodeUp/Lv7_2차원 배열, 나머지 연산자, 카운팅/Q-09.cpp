#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];

        cout << i + 1 << "번사람은" << arr[i] << "점";
        if (arr[i] >= 70){
            cout << "PASS";
        }
        else if (arr[i] >= 50){
            cout << "RETEST";
        }
        else if (arr[i] < 50){
            cout << "FAIL";
        }

        cout << endl;
    }

    return 0;
}
