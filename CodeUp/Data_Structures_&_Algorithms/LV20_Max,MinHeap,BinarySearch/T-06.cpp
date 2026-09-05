#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int nums[4] = {};
int result = 0;
int visited[4] = {};
void recursive(int level, int path){
	if (level == 4){
		if (path > 3000){
			result++;
		}
		return;
	}

	path *= 10;

	for (int i = 0; i < size(nums); ++i)
	{
		if (visited[i] == 1) continue;

		visited[i] = 1;
		recursive(level + 1, path + nums[i]);
		visited[i] = 0;
	}
}
int main()
{
	for (int i = 0; i < 4; ++i)
	{
		cin >> nums[i];
	}

	recursive(0, 0);

	cout << result;
	return 0;
}