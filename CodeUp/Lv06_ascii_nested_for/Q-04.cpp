#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'$', '@', 'D', 'A', '9', '#'};

    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i] << ":" << static_cast<int>(arr[i]) << endl;
    }

    return 0;
}
