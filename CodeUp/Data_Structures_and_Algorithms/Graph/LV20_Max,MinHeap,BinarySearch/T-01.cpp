#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int tree[] = {0, 3, 2, 5, 1, 6, 0, 7, 0, 0, 0, 0, 0, 0, 4, 8};


void dfs(int node){
	if (node >= size(tree) ||tree[node] == 0){
		return;
	}

	dfs(node * 2);
	dfs(node * 2 + 1);
	cout << tree[node] << " ";
}
int main()
{
	dfs(1);

	return 0;
}