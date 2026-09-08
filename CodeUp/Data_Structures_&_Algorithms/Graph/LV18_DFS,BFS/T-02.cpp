#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n;
int visited[10] = {};
int cnt;

void recursive(int level){
	if (level == 3){
		cnt++;
		return;
	}

	for (int i = 0; i < n; ++i)
	{
		if (visited[i] == 1){
			continue;
		}

		visited[i] = 1;
		recursive(level + 1);
		visited[i] = 0;
	}
}
int main()
{
	cin >> n;
	recursive(0);
	cout << cnt;

	return 0;
}