#include <iostream>
#include <vector>
#include <list>

using namespace std;

string str = "<35<6<912>>10>";

int main()
{
	int openCount = 0;
	int closeCount = 0;

	for (int i = 0; i < str.length(); ++i)
	{
		char ch = str[i];
		if (ch >= '0' && ch <= '9') continue;

		if (ch == '<') openCount++;
		else if (ch == '>') closeCount++;

		if (closeCount > openCount){
			cout << "비정상";
			return 0;
		}
	}

	if (openCount == closeCount){
		cout << "정상";
	} else{
		cout << "비정상";
	}
	return 0;
}