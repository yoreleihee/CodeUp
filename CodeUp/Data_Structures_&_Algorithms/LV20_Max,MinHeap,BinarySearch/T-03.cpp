#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
int result = 0;
vector<int> path;
void recursive(int level){
	if (level == n){
		int sum = 0;
		for (int n : path){
			sum += n;
		}
		if (sum == 10){
			result++;
		}
		return;
	}

	for (int i = 1; i <= 10; ++i)
	{
		path.push_back(i);
		recursive(level + 1);
		path.pop_back();
	}
}

int main()
{
	cin >> n;

	recursive(0);
	cout << result;

	return 0;
}