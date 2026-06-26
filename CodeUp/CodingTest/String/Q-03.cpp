#include <iostream>
using namespace std;

int main()
{
	string s = "loveleetcode";

	int count[256] = {};

	for (int i = 0; i < s.length(); ++i)
		count[s[i]]++;

	int result = -1;
	for (int i = 0; i < s.length(); ++i){
		if (count[s[i]] == 1){
			result = i;
			break;
		}
	}

	cout << result;

	return 0;
}