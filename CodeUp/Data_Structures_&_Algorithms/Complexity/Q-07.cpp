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
	vector<int> arr;

	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}

	int sum = arr[0];
	int maxSum = sum;
	int startIdx = 0;
	int endIdx = 0;
	int tempStartIdx= 0;
	for (int i = 1; i < arr.size(); ++i)
	{
		sum += arr[i];

		if (sum < 0){
			sum = 0;
			tempStartIdx = i + 1;
		}
		if (maxSum < sum){
			maxSum = sum;
			startIdx = tempStartIdx;
			endIdx = i;
		}
	}

	cout << startIdx << " " << endIdx;
	return 0;
}