#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int main()
{
	string tree = " ADFZCGQH";

	char ch1;
	char ch2;
	cin >> ch1 >> ch2;

	int ch1Idx = tree.find(ch1);
	int ch2Idx = tree.find(ch2);

	if (ch1Idx / 2 == ch2Idx || ch2Idx / 2 == ch1Idx){
		cout << "부모자식관계";
	} else{
		cout << "아님";
	}
	return 0;
}