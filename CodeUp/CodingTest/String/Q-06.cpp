#include <iostream>
using namespace std;

int myAtoi(string& s){
	int idx = 0;

	while (idx < s.length() && s[idx] == ' '){
		idx++;
	}

	if (idx >= s.length()){
		return 0;
	}

	bool isNegative = s[idx] == '-';
	if (isNegative){
		idx++;
	}
	else if (s[idx] == '+'){
		idx++;
	}

	int result = 0;
	while (idx < s.length() && isdigit(s[idx])){
		int digit = s[idx] - '0';

		if (!isNegative && (result > (INT_MAX - digit) / 10)){
			return INT_MAX;
		}
		else if (isNegative && (-result < (INT_MIN + digit) / 10)){
			return INT_MIN;
		}

		result = result * 10 + digit;
		idx++;
	}

	return isNegative ? -result : result;
}
int main()
{
	string s = "  00";
	cin >> s;

	cout << myAtoi(s);

	return 0;
}