#include <iostream>
using namespace std;

bool isAnagram(const string& s, const string& t){
	if (s.length() != t.length()){
		return false;
	}

	int sTable[256] = {};
	int tTable[256] = {};

	for (int i = 0; i < s.length(); ++i)
	{
		sTable[s[i]]++;
		tTable[t[i]]++;
	}

	for (int i = 0; i < 256; ++i)
	{
		if (sTable[i] != tTable[i]) {
			return false;
		}
	}

	return true;
}

int main()
{
	string s = "rat";
	string t = "car";

	bool result = isAnagram(s, t);

	if (result){
		cout << "true";
	} else{
		cout << "false";
	}

	return 0;
}