#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<int> intList;

	int num;
	cin >> num;

	for (int i = 1; i <= 4; ++i)
	{
		int elem = num * i;
		intList.push_back(elem);
	}

	for (auto p = intList.begin(); p != intList.end(); ++p)
	{
		cout << *p << " ";
	}
	return 0;
}