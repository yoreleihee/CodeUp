#include <iostream>
using namespace std;

void bbq(int n){
    if (n == 1){
        return;
    }

    bbq(n - 1);
}
int main() {
    bbq(4);

    return 0;
}
