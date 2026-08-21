#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

struct Set{
	int n;
	char ch;
};
int main()
{
	vector<Set> sets;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		Set set;
		cin >> set.n >> set.ch;
		sets.push_back(set);
	}

	for (int i = 1; i < n; ++i)
	{
		Set key = sets[i];
		int j = i - 1;

		while (j >= 0 && (sets[j].n > key.n ||
		                  (sets[j].n == key.n && sets[j].ch > key.ch)))
		{
			sets[j + 1] = sets[j];
			j--;
		}

		sets[j + 1] = key;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << sets[i].n << " " << sets[i].ch << endl;
	}

	return 0;
}