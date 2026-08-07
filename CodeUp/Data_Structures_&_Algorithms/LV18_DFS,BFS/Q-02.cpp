#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int map[6][6] = {
		0, 0, 1, 0, 2, 0,
		5, 0, 3, 0, 0, 0,
		0, 0, 0, 0, 0, 7,
		2, 0, 0, 0, 8, 0,
		0, 0, 9, 0, 0, 0,
		4, 0, 0, 7, 0, 0,
};

int visited[6] = {};
int sum = 0;

void dfs(int node){
	cout << node << " " << sum << endl;

	for (int i = 0; i < 6; ++i)
	{
		if (visited[i] == 1){
			continue;
		}
		if (map[node][i] != 0){
			visited[i] = 1;
			sum += map[node][i];
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