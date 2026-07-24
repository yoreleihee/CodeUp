#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int tree[] = {0, 3, 4, 2, 4, 1, 0, 3};
int target;
int targetValue;

void dfs(int node){
	if (node >= size(tree) || tree[node] == 0) return;

	cout << tree[node] << " ";

	dfs(node * 2);
	dfs(node * 2 + 1);
}
int main()
{
	cin >> target >> targetValue;
	tree[target] = targetValue;

	dfs(1);

	return 0;
}