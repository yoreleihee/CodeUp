#include <iostream>
using namespace std;

void FindABC(char *arr1, char *arr2, int *aCount, int *bCount, int *cCount){
    for (int i = 0; arr1[i] != '\0'; ++i)
    {
        if ('A' == arr1[i]){
            *aCount += 1;
        }
        else if ('B' == arr1[i]){
            *bCount += 1;
        }
        else if ('C' == arr1[i]){
            *cCount += 1;
        }

        if ('A' == arr2[i]){
            *aCount += 1;
        }
        else if ('B' == arr2[i]){
            *bCount += 1;
        }
        else if ('C' == arr2[i]){
            *cCount += 1;
        }
    }
}
int main()
{
    char arr1[100];
    char arr2[100];

    cin >> arr1 >> arr2 ;

    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    FindABC(arr1, arr2, &aCount, &bCount, &cCount);

    cout << "A:" << aCount << endl;
    cout << "B:" << bCount << endl;
    cout << "C:" << cCount << endl;

    return 0;
}
