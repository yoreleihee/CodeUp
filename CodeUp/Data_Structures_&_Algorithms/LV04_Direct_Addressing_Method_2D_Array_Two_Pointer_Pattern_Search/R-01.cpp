#include <iostream>
using namespace std;

void BBQ(int* a, int* b){
    int nums[5] = {};

    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < size(nums); ++i)
    {
        cin >> nums[i];

        if (max <nums[i]){
            max = nums[i];
        }

        if (min > nums[i]){
            min = nums[i];
        }
    }

    *a = max;
    *b = min;
}
int main()
{
    int a, b;
    BBQ(&a, &b);

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}
