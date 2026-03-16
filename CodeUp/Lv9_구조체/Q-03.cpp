#include <iostream>
using namespace std;

char arr[] = { 'A', 'F', 'G', 'A', 'B', 'C'};
int main()
{
    char a, b;
    cin >> a >> b;

    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < size(arr); ++i)
    {
        if (arr[i] == a){
            count1++;
        }
        else if (arr[i] == b){
            count2++;
        }
    }

    if (count1 >= 1 && count2 >= 1){
        cout << "와2개";
    }
    else if (count1 >= 1 || count2 >= 1){
        cout << "오1개";
    } else{
        cout << "우0개";
    }

    return 0;
}
