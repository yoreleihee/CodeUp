#include <iostream>
using namespace std;

int GOP(){
    int a, b;
    cin >> a >> b;

    return a * b;
}

int SUM(){
    int a, b;
    cin >> a >> b;

    return a + b;
}

int main()
{
    int gop = GOP();
    int sum = SUM();

    if (gop > sum){
        cout << "GOP>SUM";
    }
    else if (gop < sum){
        cout << "GOP<SUM";
    } else{
        cout << "GOP==SUM";
    }

    return 0;
}
