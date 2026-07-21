#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

list<char> charList;

void add(char c){
	charList.push_back(c);
}
int main()
{
	int length;
	cin >> length;

	for (int i = 0; i < length; ++i)
	{
		char c;
		cin >> c;
		add(c);
	}

	for (char & i : charList)
	{
		cout << i << " ";
	}

	return 0;
}