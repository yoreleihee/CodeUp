#include <iostream>
using namespace std;

int vect[3][4] = {
        3, 5, 4, 1,
        1, 1, 2, 3,
        6, 7, 1, 2
};

int visited[3][4] = {};

void targetChange(int target, int value){
    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            if (vect[i][j] == target && visited[i][j] == 0){
                vect[i][j] = value;
                visited[i][j] = 1;
            }
        }
    }
}

int main()
{
    int arr[4] = {};
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size(arr); ++i)
    {
        int target = arr[i];
        int value = 0;
        if (i < size(arr) - 1){
             value = arr[i + 1];
        } else{
            value = arr[0];
        }

        targetChange(target, value);
    }

    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            cout << vect[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}
