#include <iostream>
#include <vector>
#include <queue>
using namespace std;

string ToLower(string str){
	string result = "";
	for (int i = 0; i < str.length(); ++i)
	{
		if (isupper(str[i])){
			result += str[i] + 32;
		} else{
			result += str[i];
		}
	}

	return result;
}

int main()
{
	string str;
	cin >> str;
	string danger[] = {
			"chicken",
			"pizza",
			"jockbal",
			"bread",
			"samhap"
	};
	string lower = ToLower(str);

	for (int i = 0; i < size(danger); ++i)
	{
		int findIdx = lower.find(danger[i]);

		while (findIdx != string::npos){
			str.replace(findIdx, danger[i].length(), "###");
			lower.replace(findIdx, danger[i].length(), "###");

			findIdx = lower.find(danger[i], findIdx + 3);
		}
	}

	cout << str;

	return 0;
}