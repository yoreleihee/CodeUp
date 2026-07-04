#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int nums[] = {1, 1, 2};

	int expectedNums[size(nums)] = {};

	int resultIdx = 1;
	int curr = nums[0];
	expectedNums[0] = curr;

	int i = 1;
	while (i < size(nums)){
		if (curr != nums[i]){
			curr = nums[i];
			expectedNums[resultIdx++] = curr;
		}
		i++;
	}

	cout << "k = " << resultIdx << ", nums = [";
	for (int i = 0; i < resultIdx; ++i)
	{
		cout << expectedNums[i];
		if (i != resultIdx - 1){
			cout << ", ";
		}
	}

	cout << "]";

	return 0;
}