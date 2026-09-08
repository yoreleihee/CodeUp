#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int arr[5] = {};
int cnt;

void recursive(int level, int sum){
	if (level == 5){
		if (10 <= sum && sum <= 20){
			cnt++;
		}
		return;
	}

	recursive(level + 1, sum + arr[level]);
	recursive(level + 1, sum);
}
int main()
{
	for (int i = 0; i < size(arr); ++i)
	{
		cin >> arr[i];
	}

	recursive(0, 0);

	cout << cnt;

	return 0;
}