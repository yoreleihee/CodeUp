#include <iostream>
using namespace std;

void bbq(int depth){
    if (depth == 3){
        return;
    }

    bbq(depth + 1);
}
int main() {
    bbq(1);

    return 0;
}
