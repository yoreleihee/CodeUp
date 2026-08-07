#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int map[6][6] = {};
char path[7] = {};

void dfs(int node, int level){
	bool hasChild = false;

	for (int i = 0; i < 6; ++i)
	{
		if (map[node][i] == 1){
			hasChild = true;
			path[level + 1] = char('A' + i);
			dfs(i, level + 1);
			path[level + 1] = 0;
		}
	}

	if (!hasChild){
		cout << path << endl;
	}
}

int main()
{
	for (int i = 0; i < size(map); ++i)
	{
		for (int j = 0; j < size(map[i]); ++j)
		{
			cin >> map[i][j];
		}
	}

	path[0] = 'A';
	dfs(0, 0);

	return 0;
}