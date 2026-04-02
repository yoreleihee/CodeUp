#include <iostream>
using namespace std;

char table[2][3] = {
        'F', 'E', 'W',
        'D', 'C', 'A'
};

void findCh(char c){
    for (int i = 0; i < size(table); ++i)
    {
        for (int j = 0; j < size(table[i]); ++j)
        {
            if (c == table[i][j]){
                cout << "뱔견";
                return;
            }
        }
    }

    cout << "미발견";
}
int main(){
    char c;
    cin >> c;

    findCh(c);
    return 0;
}