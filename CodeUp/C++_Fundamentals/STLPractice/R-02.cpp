#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

string query[6] = {
		"ABCD",
		"ABCE",
		"AGEH",
		"EIEI",
		"FEQE",
		"ABAD"
};

bool isMatch(string word, string target){
	for (int i = 0; i < 4; ++i)
	{
		if (target[i] == '?') continue;

		if (target[i] != word[i]) return false;
	}

	return true;
}
int main()
{
	string target;
	cin >> target;

	int count = 0;

	for (int i = 0; i < size(query); ++i)
	{
		if (isMatch(query[i], target)){
			count++;
		}
	}

	cout << count;
	return 0;
}