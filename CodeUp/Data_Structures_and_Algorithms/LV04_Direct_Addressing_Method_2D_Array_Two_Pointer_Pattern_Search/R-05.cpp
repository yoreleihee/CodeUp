#include <iostream>
using namespace std;

struct Sketchbook{
    char image[3][3] = {};

    void input(){
        for (int i = 0; i < size(image); ++i)
        {
            for (int j = 0; j < size(image[i]); ++j)
            {
                cin >> image[i][j];
            }
        }
    }
};
int main()
{
    Sketchbook sketchbook;

    sketchbook.input();

    int hashTable[256] = {};

    for (int i = 0; i < size(sketchbook.image); ++i)
    {
        for (int j = 0; j < size(sketchbook.image[i]); ++j)
        {
            int idx = sketchbook.image[i][j];

            hashTable[idx]++;
        }
    }

    for (int i = 0; i < size(hashTable); ++i)
    {
        if (hashTable[i] != 0){
            cout << char(i);
        }
    }

    return 0;
}
