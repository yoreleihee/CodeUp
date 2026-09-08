#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int table[5][5] = {
		0, 0, 2, 4, 0,//T
		3, 0, 6, 0, 2,//G
		0, 0, 0, 1, 0,//H
		10, 0, 0, 0, 0,//B
		0, 0, 0, 8, 0//K
};

char names[] = "TGHBK";
int minCost = INT_MAX;
string minPath = {};

void dfs(int node, int target, int curCost, string curPath, vector<int> visited){
	curPath += names[node];
	visited[node] = 1;

	if (node == target){
		if (minCost > curCost){
			minCost = curCost;
			minPath = curPath;
		}

		return;
	}
	for (int i = 0; i < size(table[node]); ++i)
	{
		if (visited[i] == 1) continue;
		if (table[node][i] == 0) continue;

		dfs(i, target, curCost + table[node][i], curPath, visited);
	}
}
int charToIdx(char ch){
	for (int i = 0; i < 5; ++i)
	{
		if (ch == names[i]) return i;
	}

	return -1;
}
int main()
{
	char start, end;
	cin >> start >> end;

	vector<int> visited;
	for (int i = 0; i < 5; ++i)
	{
		visited.push_back(0);
	}

	dfs(charToIdx(start), charToIdx(end), 0, "", visited);

	cout << minCost << ":" << minPath;
	return 0;
}