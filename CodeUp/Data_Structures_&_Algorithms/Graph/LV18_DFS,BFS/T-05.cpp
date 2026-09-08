#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> arr = {};
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}

	int result = 0;
	for (int i = 0; i < 3; ++i)
	{
		// min 찾기
		int min = INT_MAX;
		int minIdx = 0;
		for (int j = 0; j < arr.size(); ++j)
		{
			if (min > arr[j]){
				if (i == 0 && arr[j] == 0){
					continue;
				}

				min = arr[j];
				minIdx = j;
			}
		}

		arr.erase(arr.begin() + minIdx);
		result = result * 10 + min;
	}

	cout << result;
	return 0;
}