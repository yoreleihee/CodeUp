#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int nums[] = {1, 2, 3, 4, 5, 6, 7};

	int k = 3;
	for (int i = 0; i < k; ++i)
	{
		int temp = nums[size(nums) - 1];
		for (int j = size(nums) - 1; j > 0; --j)
		{
			nums[j] = nums[j - 1];
		}

		nums[0] = temp;
	}

	for (int i = 0; i < size(nums); ++i)
	{
		cout << nums[i] << " ";
	}
	return 0;
}