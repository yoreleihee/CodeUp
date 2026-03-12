#include <iostream>
using namespace std;

char arr[] = {'#', '_', '#', '_', '#', '#'};

int main()
{
    for (int i = 0; i < size(arr); ++i)
    {
        if (arr[i] == '#'){
            cout << "샵";
        }
        else if (arr[i] == '_'){
            cout << "무";
        }
    }
    return 0;
}
