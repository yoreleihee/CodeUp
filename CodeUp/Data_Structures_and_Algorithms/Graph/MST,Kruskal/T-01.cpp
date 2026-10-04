#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int arr[9] = {};

int maxValue = INT_MIN;
int maxCnt = 0;

void recursive(int level, int start, int value){
	if (level == 3){
		if (maxValue < value){
			maxCnt = 1;
			maxValue = value;
		}
		else if (maxValue == value){
			maxCnt++;
		}
		return;
	}

	for (int i = start; i < 9; ++i)
	{
		int num = arr[i];
		recursive(level + 1, i + 1, value * num);
	}
}
int main()
{
	for (int i = 0; i < 9; ++i)
	{
		cin >> arr[i];
	}

	recursive(0, 0, 1);
	cout << maxCnt;
	return 0;
}