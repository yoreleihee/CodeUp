#include <iostream>
using namespace std;

struct Data{
    int y;
    int x;
    int z;

    void Input(){
        cin >> x >> y >> z;
    }
};

int sum(int a, int b){
    return a + b;
}

int main() {
    Data a, b;

    a.Input();
    b.Input();

    cout << sum(a.x, b.x) << endl;
    cout << sum(a.y, b.y) << endl;
    cout << sum(a.z, b.z) << endl;
    return 0;
}
