#include <iostream>
using namespace std;

void KFC(int *bigCount, int *smallCount){
    char arr[10];
    cin >> arr;

    for (int i = 0; i < size(arr); ++i)
    {
        if ('a' <= arr[i] && arr[i] <= 'z'){
            *smallCount += 1;
        }
        else if ('A' <= arr[i] && arr[i] <= 'Z'){
            *bigCount += 1;
        }
    }
}
int main()
{
    int bigCount = 0;
    int smallCount = 0;

    KFC(&bigCount, &smallCount);

    cout << "대문자" << bigCount << "개" << endl;
    cout << "소문자" << smallCount << "개" << endl;
    return 0;
}
