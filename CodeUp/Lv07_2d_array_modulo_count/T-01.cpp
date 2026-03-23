#include <iostream>
using namespace std;

int num;

int main()
{
    cin >> num;

    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (i > 2){
                if (j > 2){
                    break;
                }
            }

            cout << num;
        }
        cout << endl;
    }
    return 0;
}
