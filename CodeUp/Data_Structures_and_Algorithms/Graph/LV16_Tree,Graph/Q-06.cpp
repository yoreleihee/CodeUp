#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int n;
int tree[100][100] = {};
char path[100] = {};

void dfs(int node, int level){
	path[level] = (char) '0' + node;

	if (level == 2){
		cout << path[0] << " " << path[1] << " " << path[2] << endl;
	}

	for (int i = 0; i < n; ++i)
	{
		if (tree[node][i] == 1){
			dfs(i, level + 1);
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> tree[i][j];
		}
	}

	dfs(0, 0);

	return 0;
}