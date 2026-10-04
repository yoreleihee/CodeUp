#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<char> charList;

	int num;
	cin >> num;

	for (int i = 0; i < 4; ++i)
	{
		char elem = 'A' + (num - 11) + i;
		charList.push_back(elem);
	}

	for (auto p = charList.begin(); p != charList.end(); ++p)
	{
		cout << *p << " ";
	}
	return 0;
}