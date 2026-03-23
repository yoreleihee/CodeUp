#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 2, 5, 1, 6, 7, 3};

    char ch1, ch2;
    cin >> ch1 >> ch2;

    int aIndex = ch1 - 'A';
    int bIndex = ch2 - 'A';

    int distance = 0;
    for (int i = aIndex - 1; i > bIndex ; --i)
    {
        distance += arr[i];
    }

    cout << distance;
    return 0;
}
