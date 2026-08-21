#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
	int points;
	cin >> points;

	vector<int> plants[9];
	for (int i = 0; i < points; ++i)
	{
		int y, x;
		string hp;

		cin >> y >> x >> hp;

		for (int j = 0; j < hp.length(); ++j)
		{
			plants[i].push_back(hp[j] - '0');
		}
	}

	int windCount;
	cin >> windCount;

	for (int i = 0; i < windCount; ++i)
	{
		int power;
		cin >> power;

		for (int j = 0; j < points; ++j)
		{
			if (plants[j].size() <= 0) continue;

			int idx = plants[j].size() - 1;
			plants[j][idx] -= power;

			if (plants[j][idx] <= 0){
				plants[j].pop_back();
			}
		}
	}

	int result = 0;
	for (int i = 0; i < points; ++i)
	{
		for (int j = 0; j < plants[i].size(); ++j)
		{
			result++;
		}
	}

	cout << result;
	return 0;
}