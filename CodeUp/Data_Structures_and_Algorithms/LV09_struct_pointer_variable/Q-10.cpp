#include <iostream>
using namespace std;

int main()
{
    char str[10];
    cin >> str;

    int data[4];
    for (int i = 0; i < size(data); ++i)
    {
        cin >> data[i];
    }

    char* pTrs[4];
    for (int i = 0; i < 4; ++i)
    {
        int idx = data[i];
        pTrs[i] = &str[idx];
        cout << *pTrs[i];
    }
    return 0;
}
