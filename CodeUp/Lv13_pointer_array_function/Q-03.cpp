#include <iostream>
using namespace std;

int stringLen(char* str){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }

    return i;
}
int main()
{
    char arr[100];
    cin >> arr;

    int length = stringLen(arr);

    cout << length << "글자";
    return 0;
}
