#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int graph[100][100] = {};
int n;

bool visited[100] = {};
void dfs(int node){
	visited[node] = true;
	cout << node << " ";

	for (int i = 0; i < n; ++i)
	{
		if (graph[node][i] == 1 && !visited[i]){
			dfs(i);
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
			cin >> graph[i][j];
		}
	}

	dfs(0);

	return 0;
}