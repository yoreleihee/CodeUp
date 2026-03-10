#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'B', 'T', 'K', 'A'};

    int num;
    cin >> num;

    for (int j = 0; j < num; ++j)
    {
        for (int i = 0; i < size(arr); ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
