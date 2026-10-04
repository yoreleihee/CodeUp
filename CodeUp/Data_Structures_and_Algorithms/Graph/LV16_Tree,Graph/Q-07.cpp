#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int binaryTree[8];
int path[8] = {};

void dfs(int node, int level){
	if (node >= size(binaryTree) || binaryTree[node] == 0) return;

	path[level] = binaryTree[node];

	if (0 == (binaryTree[node] % 2)){
		for (int i = 0; i <= level; ++i)
		{
			cout << path[i] << " ";
		}
		cout << endl;
	}

	dfs(node * 2, level + 1);
	dfs(node * 2 + 1, level + 1);
}

int main()
{
	for (int i = 0; i < size(binaryTree); ++i)
	{
		cin >> binaryTree[i];
	}

	dfs(1, 0);

	return 0;
}