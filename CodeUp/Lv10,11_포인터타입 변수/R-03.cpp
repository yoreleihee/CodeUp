#include <iostream>
using namespace std;

struct Fruit {
    int size;
    int price;
};

int main()
{
    Fruit banana;
    Fruit apple;

    cin >> banana.size >> apple.size;

    banana.price = banana.size * 250;
    apple.price = apple.size * 500;

    cout << banana.price + apple.price << "원";
    return 0;
}
