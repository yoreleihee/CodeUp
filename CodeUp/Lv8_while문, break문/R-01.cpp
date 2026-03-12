#include <iostream>
using namespace std;

int arr[6];

int main()
{
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];

        if (arr[i] < 5){
            cout << i << "번은 " << arr[i] << "점 " "불합격" << endl;
        } else{
            cout << i << "번은 " << arr[i] << "점 " "합격" << endl;
        }
    }
    return 0;
}
