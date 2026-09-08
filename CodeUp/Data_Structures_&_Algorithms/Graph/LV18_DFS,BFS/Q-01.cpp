#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int map[6][6] = {
		0, 0, 1, 1, 0, 1,
		0, 0, 0, 1, 1, 1,
		0, 0, 0, 0, 1, 1,
		0, 0, 0, 0, 0, 0,
		1, 0, 0, 0, 0, 1,
		0, 0, 0, 0, 0, 0,
};

int visited[6] = {};

void dfs(int node){
	cout << node << " ";

	for (int i = 0; i < 6; ++i)
	{
		if (visited[i] == 1){
			continue;
		}
		if (map[node][i] == 1){
			visited[i] = 1;
			dfs(i);
		}
	}
}
int main()
{
	int startNode;
	cin >> startNode;
	visited[startNode] = 1;
	dfs(startNode);

	return 0;
}