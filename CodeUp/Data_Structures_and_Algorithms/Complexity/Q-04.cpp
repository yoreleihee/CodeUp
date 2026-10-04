#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
	int arr[9] = {1, 2, 3, 3, 5, 1, 0, 1, 3};

	int sum = 0;
	for (int i = 0; i < 3; ++i)
	{
		sum += arr[i];
	}

	int minSum = sum;

	for (int i = 3; i < size(arr); ++i)
	{
		sum += arr[i] - arr[i - 3];

		minSum = min(minSum, sum);
	}

	cout << minSum;
	return 0;
}