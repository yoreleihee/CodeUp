#include <iostream>
using namespace std;

int countBlackList(char town[3][4], char target){
    int result = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (target == town[i][j]){
                result++;
            }
        }
    }

    return result;
}
int main() {
    char town[3][4] = {
            "CDA",
            "BMZ",
            "QPO"
    };

    char blackList[5] = {};

    cin >> blackList;

    int blackListCount = 0;
    for (int i = 0; i < size(blackList); ++i)
    {
        blackListCount += countBlackList(town, blackList[i]);
    }

    cout << blackListCount << "명";
    return 0;
}
