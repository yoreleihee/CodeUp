#include <iostream>
using namespace std;

int main()
{
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int nums2[] = {2, 5, 6};

    int m = 3;
    int n = 3;

    int a = m - 1;
    int b = n - 1;
    int c = m + n - 1;

    while (b >= 0){
        if (a >= 0 && nums1[a] > nums2[b]){
            nums1[c--] = nums1[a--];
        }
        else{
            nums1[c--] = nums2[b--];
        }
    }

    cout << "[" << nums1[0];
    for (int i = 1; i < size(nums1); ++i)
    {
        cout << "," <<nums1[i];
    }

    cout << "]";

    return 0;
}
