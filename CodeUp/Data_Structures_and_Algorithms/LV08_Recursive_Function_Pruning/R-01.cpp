#include <iostream>
using namespace std;

int arr[] = {3, 5,1 , 9, 7};

void moveRight(){
    int temp = arr[4];

    for (int i = size(arr) - 1; i > 0; --i)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;
}

void moveLeft(){
    int temp = arr[0];

    for (int i = 0; i < size(arr) - 1; ++i)
    {
        arr[i] = arr[i + 1];
    }

    arr[size(arr) - 1] = temp;
}

int main()
{
    for (int i = 0; i < 4; ++i)
    {
        char direction;
        cin >> direction;

        if (direction == 'R'){
            moveRight();
        } else{
            moveLeft();
        }
    }

    for (int i = 0; i < size(arr); ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
