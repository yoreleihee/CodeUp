#include <iostream>
using namespace std;

int vect[4][4] = {};
int num = 1;

void fillInOrder(int target){
    int count = 1;

    for (int i = 0; i < size(vect); ++i)
    {
        for (int j = 0; j < size(vect[i]); ++j)
        {
            if (target == count){
                vect[i][j] = num++;
            }

            count++;
        }
    }
}

int main()
{
    int arr[4];
    for (int i = 0; i < size(arr); ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size(arr); ++i)
    {
        fillInOrder(arr[i]);
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
