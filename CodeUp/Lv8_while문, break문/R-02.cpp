#include <iostream>
using namespace std;

char arr[] = {'D', 'T', 'A', 'B', 'W', 'Q'};
char c;

int main()
{
    cin >> c;

    for (int i = 0; i < size(arr); ++i)
    {
        if (arr[i] == c){
            cout << i << "번 INDEX";
        }
    }
    return 0;
}
