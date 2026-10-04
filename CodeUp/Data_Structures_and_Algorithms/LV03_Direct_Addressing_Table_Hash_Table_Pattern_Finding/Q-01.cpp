#include <iostream>
using namespace std;

int main() {
    char cardList[16] = {};
    cin >> cardList;

    int cardCount[256] = {};

    int len = strlen(cardList);
    for (int i = 0; i < len; ++i)
    {
        int idx = cardList[i];
        cardCount[idx] += 1;
    }

    int typeCount = 0;
    for (int i = 0; i < size(cardCount); ++i)
    {
        if (cardCount[i] != 0){
            typeCount += 1;
        }
    }

    cout << typeCount << "개";

    return 0;
}
