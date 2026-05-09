#include <iostream>
using namespace std;

int main()
{
    string arr[4] = {};
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size(arr); ++i)
    {
        for (int j = 0; j < size(arr) - 1; ++j)
        {
            if (arr[j].length() > arr[j + 1].length()){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
