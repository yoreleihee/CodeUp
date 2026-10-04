#include <iostream>
using namespace std;

int main()
{
    int numbers[6] = {3, 7, 4, 0, 9, 6};
    string commend = "mxmmxx";

    int* pArr = numbers;
    for (int i = 0; i < commend.length(); ++i)
    {
        char c = commend[i];

        int* result = nullptr;
        if (c == 'x'){
            result = max_element(pArr, pArr + 6 - i);
        } else{
            result = min_element(pArr, pArr + 6 - i);
        }

        cout << *result;

        swap(pArr[6 - i - 1], *result);
    }
    return 0;
}