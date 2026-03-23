#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; ++i)
    {
        int num;
        cin >> num;

        if (num < 20){
            cout << "더 큰수를 입력하세요" << endl;
        }
        else if (num > 20){
            cout << "더 작은수를 입력하세요" << endl;
        }
        else {
            cout << "정답입니다" << endl;
        }
    }

    return 0;
}
