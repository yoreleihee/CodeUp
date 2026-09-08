#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int ySize = 3;
int xSize = 8;
int cnt = 0;

void dfs(int y, int x){
	if (x == xSize - 1){
		cnt++;
		return;
	}

	for (int d = -1; d <= 1; ++d)
	{
		int newY = y + d;
		if (newY < 0 || newY >= ySize) continue;

		dfs(newY, x + 1);
	}
}
int main()
{
	dfs(0, 0);
	cout << cnt;
	return 0;
}