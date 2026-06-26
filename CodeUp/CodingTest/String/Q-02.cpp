#include <iostream>
#include <vector>

using namespace std;

int reverse(int value){
	int result = 0;

	bool isNegative = false;
	if (value < 0){
		isNegative = true;
		value = -value;
	}

	while (value > 0){
		int digit = value % 10;
		if (result > (INT_MAX - digit) / 10){
			return 0;
		}
		result = result * 10 + digit;
		value /= 10;
	}

	if (isNegative){
		result = -result;
	}

	return result;
}
int main()
{
	int x = 123;

	cout << reverse(x);

	return 0;
}