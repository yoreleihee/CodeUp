#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
	vector<int> arr;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}

	int sum = 0;
	for (int i = 0; i < 4; ++i)
	{
		sum += arr[i];
	}

	int minSum = sum;
	for (int i = 4; i < n; ++i)
	{
		sum += arr[i] - arr[i - 4];
		minSum = min(sum, minSum);
	}

	cout << minSum;
	return 0;
}