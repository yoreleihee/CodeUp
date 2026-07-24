#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int nums[5] = {};
	int carry = 0;

	for (int i = 4; i >= 0; --i)
	{
		nums[i] = num % 10;
		num /= 10;

		nums[i] += 1 + carry;
		carry = nums[i] / 10;
		nums[i] %= 10;
	}

	for (int i = size(nums) - 1; i >= 0; --i)
	{
		cout << nums[i];
	}
	return 0;
}