#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int nodes[8] = {};
int result = 0;

void dfs(int node, int level){
	if (node >= size(nodes)) return;

	if (level == 2){
		result += nodes[node];
	}

	dfs(node * 2, level + 1);
	dfs(node * 2 + 1, level + 1);
}

int main()
{
	for (int i = 1; i < size(nodes); ++i)
	{
		cin >> nodes[i];
	}

	dfs(1, 0);

	cout << result;
	return 0;
}