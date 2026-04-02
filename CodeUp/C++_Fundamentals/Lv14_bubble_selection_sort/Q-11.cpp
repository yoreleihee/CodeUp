#include <iostream>
using namespace std;

int GetLength(char *arr){
    int length = 0;
    while (arr[length] != '\0'){
        length++;
    }

    return length;
}

int main()
{
    char table[2][6] = {
            "DATAW",
            "BBQK"
    };

    int input;
    cin >> input;

    if (input % 2 == 1){
        int length = GetLength(table[0]);

        // 버블 정렬
        for (int i = 0; i < length; ++i)
        {
            for (int j = 0; j < length - i - 1; ++j)
            {
                if (table[0][j] > table[0][j + 1]){
                    char temp = table[0][j];
                    table[0][j] = table[0][j + 1];
                    table[0][j + 1] = temp;
                }
            }
        }
    } else{
        int length = GetLength(table[1]);

        // 선택 정렬
        for (int i = 0; i < length - 1; ++i)
        {
            int minIndex = i;
            for (int j = i + 1; j < length; ++j)
            {
                if (table[1][j] < table[1][minIndex]){
                    minIndex = j;
                }
            }

            char temp = table[1][minIndex];
            table[1][minIndex] = table[1][i];
            table[1][i] = temp;
        }
    }

    int i = 0;
    while (table[0][i] != '\0'){
        cout << table[0][i];
        i++;
    }

    cout << endl;
    i = 0;
    while (table[1][i] != '\0'){
        cout << table[1][i];
        i++;
    }

    return 0;
}
