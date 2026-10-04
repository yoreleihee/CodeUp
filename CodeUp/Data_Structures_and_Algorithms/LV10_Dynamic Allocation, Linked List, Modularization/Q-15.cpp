#include <iostream>
using namespace std;

class Array{
    int mCount;
    int* mArray;
public:
    Array(int count) : mCount(count) {
        mArray = new int[count];
        for (int i = 0; i < count; ++i)
        {
            mArray[i] = rand() % 10;
        }
    }

    void PrintArray(){
        for (int i = 0; i < mCount; ++i)
        {
            cout << mArray[i];
        }
        cout << endl;
    }

    ~Array(){
        delete[] mArray;
    }
};
int main()
{
    srand(time(NULL));
    Array arr1(3);
    Array arr2(5);
    arr1.PrintArray();
    arr2.PrintArray();
    return 0;
}