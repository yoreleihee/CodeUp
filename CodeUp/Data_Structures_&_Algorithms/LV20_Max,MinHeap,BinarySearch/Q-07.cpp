#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
	priority_queue<int, vector<int>, less<int>> pq;

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); ++i)
	{
		pq.push(str[i]);
	}

	for (int i = 0; i < str.length(); ++i)
	{
		cout << (char)pq.top();
		pq.pop();
	}

	return 0;
}