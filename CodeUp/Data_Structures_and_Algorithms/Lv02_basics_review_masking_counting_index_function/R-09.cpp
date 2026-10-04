#include <iostream>
using namespace std;

class Calculator{
    int a, b;
public:
    Calculator(int a, int b){
        this->a = a;
        this->b = b;
    }

    void PrintCalculate(){
        cout << "덧셈 : " << a + b << endl;
        cout << "뺄셈 : " << a - b << endl;
        cout << "곱셈 : " << a * b << endl;
        cout << "나눗셈 : " << a / b << endl;
        cout << "나머지 : " << a % b << endl;
    }
};
int main() {
    int a, b;
    cin >> a >> b;
    Calculator calculator(a, b);
    calculator.PrintCalculate();
    return 0;
}
