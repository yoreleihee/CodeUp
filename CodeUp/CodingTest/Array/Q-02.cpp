#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& nums){
	int result = 0;
	for (int i = 0; i < nums.size() - 1; ++i)
	{
		if (nums[i] < nums[i + 1]){
			result += nums[i + 1] - nums[i];
		}
	}

	return result;
}

int main()
{
	vector<int> prices = {7, 1, 5, 3, 6, 4};

	int result = maxProfit(prices);

	cout << result;

	return 0;
}