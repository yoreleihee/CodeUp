#include <iostream>
using namespace std;

int main() {
    int arrA[] = {1, 3, 3, 7};
    int arrB[] = {2, 3, 4, 6};
    int result[8] = {};

    int arrAIdx = 0;
    int arrBIdx = 0;
    int i = 0;

    while (arrAIdx < 4 && arrBIdx < 4){
        if (arrA[arrAIdx] < arrB[arrBIdx]){
            result[i++] = arrA[arrAIdx++];
        } else{
            result[i++] = arrB[arrBIdx++];
        }
    }

    while (arrAIdx < 4){
        result[i++] = arrA[arrAIdx++];
    }
    while (arrBIdx < 4){
        result[i++] = arrB[arrBIdx++];
    }

    for (int j = 0; j < size(result); ++j)
    {
        cout << result[j] << " ";
    }
    return 0;
}
