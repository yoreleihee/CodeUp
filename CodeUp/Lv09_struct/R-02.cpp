#include <iostream>
using namespace std;

char arr[5];

int main()
{
    int count = 0;
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];

        if (arr[i] == 'A'){
            count++;
        }
    }

    cout << "문자A는" << count << "개발견" << endl;

    for (int i = 0; i < size(arr); ++i)
    {
        if (arr[i] == 'A'){
            cout << i << "번" << endl;
        }
    }

    return 0;
}
