#include <iostream>
using namespace std;

struct Person{
public:
    int mWin;
    char* mName;

    Person(int win, char* name)
    {
        mWin = win;
        mName = name;
    }
};
int main()
{
    Person train[7] = {
            Person(15, (char*)"summer"),
            Person(20, (char*)"Bob"),
            Person(24, (char*)"summer"),
            Person(20, (char*)"Bob"),
            Person(20, (char*)"Bob"),
            Person(20, (char*)"summer"),
            Person(20, (char*)"Frank"),
    };

    char name[20] = "summer";
    int win = 20;

    int findIdx = -1;
    for (int i = 0; i < 7; ++i)
    {
        int len = strlen(name);
        for (int j = 0; j < len; ++j)
        {
            if (train[i].mName[j] != name[j]){
                break;
            }

            if (train[i].mWin == win){
                findIdx = i;
            }
        }
    }

    cout << findIdx;
    return 0;
}
