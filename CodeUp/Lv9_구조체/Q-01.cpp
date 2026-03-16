#include <iostream>
using namespace std;

int arr[] = {4, 3, 6, 1, 3, 1, 5};
int main()
{
    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < size(arr); ++i)
    {
        if (arr[i] == n){
            count++;
        }
    }

    cout << "숫자" << n << "개수는" << count << "개";
    return 0;
}
