#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int people;
	cin >> people;

	vector<string> voters[100];

	for (int i = 0; i < people; ++i)
	{
		int pick;
		string name;
		cin >> pick >> name;

		voters[pick].push_back(name);
	}

	int max = 0;
	int maxIdx;

	for (int i = 0; i < n; ++i)
	{
		if (max < voters[i].size()){
			max = voters[i].size();
			maxIdx = i;
		}
	}

	for (int i = 0; i < voters[maxIdx].size(); ++i)
	{
		cout << voters[maxIdx][i] << " ";
	}
	return 0;
}