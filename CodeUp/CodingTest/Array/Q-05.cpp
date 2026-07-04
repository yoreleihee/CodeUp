#include <iostream>
#include <vector>

using namespace std;

int nums[] = {-1, 0, 1, 2, -1, -4};

int main()
{
	sort(nums, nums + size(nums));

	vector<vector<int>> results;

	for (int i = 0; i < size(nums) - 2; ++i)
	{
		if (i > 0 && nums[i] == nums[i - 1])
			continue;

		int left = i + 1;
		int right = size(nums) - 1;

		while (left < right){
			int sum = nums[i] + nums[left] + nums[right];

			if (sum == 0){
				while (left < right && nums[left] == nums[left + 1]) left++;
				while (left < right && nums[right] == nums[right - 1]) right--;

				vector<int> result;
				result.push_back(nums[i]);
				result.push_back(nums[left]);
				result.push_back(nums[right]);

				results.push_back(result);

				left++;
				right--;
			}
			else if (sum < 0){
				left++;
			} else{
				right--;
			}
		}
	}

	return 0;
}