#include <iostream>
using namespace std;

char arr[3];

int main()
{
    int count = 0;
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];

        if ('A' <= arr[i] && arr[i] <= 'Z'){
            count++;
        }
    }

    if (count == 3){
        cout << "풍족하다";
    }
    else if (1 <= count && count <= 2){
        cout << "적절하다";
    } else{
        cout << "부족하다";
    }
    return 0;
}
