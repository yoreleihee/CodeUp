#include <iostream>
using namespace std;

int main()
{
    string arr[4] = {};

    int maxLen = INT_MIN;
    int minLen = INT_MAX;

    int maxIdx = 0;
    int minIdx = 0;

    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];

        int len = arr[i].length();
        if (maxLen < len){
            maxLen = len;
            maxIdx = i;
        }

        if (minLen > len){
            minLen = len;
            minIdx = i;
        }
    }

    cout << "긴문장:" << maxIdx << endl;
    cout << "짧은문장:" << minIdx << endl;
    return 0;
}
