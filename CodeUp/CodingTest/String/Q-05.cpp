#include <iostream>
using namespace std;

bool validPalindrome(string& s){
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}

		if (!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= '0' && s[i] <= '9')){
			s.erase(i, 1);
			i--;
		}
	}

	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] != s[s.length() - 1 - i]) return false;
	}

	return true;
}

int main()
{
	string s = "race a car";

	bool result = validPalindrome(s);

	if (result){
		cout << "true";
	} else{
		cout << "false";
	}
	return 0;
}