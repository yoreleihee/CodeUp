#include <iostream>
#include <list>
using namespace std;

string str;

bool recursive(int bCount, int fCount, int level){
	if (level == str.length())
	{
		if (fCount == bCount)
			return true;
		else
			return false;
	}

	if (fCount > bCount){
		return false;
	}

	char c = str[level];
	if (c == 'B') return recursive(bCount + 1, fCount, level + 1);
	if (c == 'F') return recursive(bCount, fCount + 1, level + 1);
}
int main()
{
	cin >> str;

	bool result = recursive(0, 0, 0);

	if (result){
		cout << "짝이맞음";
	} else{
		cout << "짝이 안 맞음";
	}
	return 0;
}