#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

struct Node{
	char ch;
	int num;
};

bool compare(Node a, Node b){
	if (a.ch != b.ch){
		return a.ch < b.ch;
	}

	return a.num < b.num;
}
int main()
{
	int n;
	cin >> n;

	Node setArr[100] = {};

	for (int i = 0; i < n; ++i)
	{
		cin >> setArr[i].ch >> setArr[i].num;
	}

	sort(setArr, setArr + n, compare);

	for (int i = 0; i < n; ++i)
	{
		cout << setArr[i].ch << " " << setArr[i].num << endl;
	}
	return 0;
}