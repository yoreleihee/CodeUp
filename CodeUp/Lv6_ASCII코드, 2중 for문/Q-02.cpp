#include <iostream>
using namespace std;

int main()
{
    char arr[3];
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size(arr); ++i)
    {
        cout << static_cast<int>(arr[i]) << endl;
    }
    return 0;
}
