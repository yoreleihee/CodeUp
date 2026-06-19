#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> intList;
	intList.push_back(3);
	intList.push_back(5);
	intList.push_back(4);
	intList.push_back(2);

	for (int & p : intList)
	{
		cout << p << " ";
	}
	return 0;
}