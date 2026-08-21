#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
	vector<int> arr[5];
	for (int i = 0; i < size(arr); ++i)
	{
		string nums;
		cin >> nums;
		for (int j = 0; j < nums.length(); ++j)
		{
			arr[i].push_back(nums[j] - '0');
		}
	}

	int a, b;
	cin >> a >> b;

	sort(arr[a].begin(), arr[a].end());
	sort(arr[b].begin(), arr[b].end());

	for (int i = 0; i < size(arr); ++i)
	{
		cout << arr[i][0] << " ";
	}
	return 0;
}