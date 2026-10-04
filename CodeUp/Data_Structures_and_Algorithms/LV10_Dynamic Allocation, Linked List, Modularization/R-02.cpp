#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<char> charList;
	charList.push_back('Q');
	charList.push_back('T');
	charList.push_back('P');
	charList.push_back('K');
	charList.push_back('Q');

	cout << charList.back();
	return 0;
}