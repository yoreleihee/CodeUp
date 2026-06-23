#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	string str = "1999POW";

	int value = 1;
	int result = 0;
	for (int i = str.length() - 1; i >= 0; --i)
	{
		char c = str[i];

		if (c >= '0' && c <= '9'){
			int num = c - '0';

			result += num * value;
			value *= 10;
		}
	}

	result += 5;

	cout << result;
	return 0;
}