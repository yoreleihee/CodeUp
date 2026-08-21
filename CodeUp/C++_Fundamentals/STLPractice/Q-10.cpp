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

	int nums[10][10] = {};

	int bit[10][10] = {};

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> nums[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> bit[i][j];
		}
	}

	int count[10] = {};
	vector<int> lotto;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (bit[i][j] == 1){
				int idx = nums[i][j];
				count[idx]++;
				lotto.push_back(idx);
			}
		}
	}

	sort(lotto.begin(), lotto.end(), [&count](int a, int b){
		if (count[a] != count[b]){
			return count[a] > count[b];
		}
		return a < b;
	});

	for (int a : lotto){
		cout << a << " ";
	}
	return 0;
}