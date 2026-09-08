#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	string str;
	cin >> str;

	int maxLen = 0;
	int curLen = 0;
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == '~'){
			curLen++;

			if (curLen > maxLen){
				maxLen = curLen;
			}
		} else{
			curLen = 0;
		}
	}

	for (int i = 0; i < maxLen; ++i)
	{
		cout << '~';
	}
	return 0;
}