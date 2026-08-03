#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

string nodes = "RKFCBICM";
int map[8][8] = {};

void dfs(int node){
	cout << nodes[node];

	for (int i = 0; i < size(map[node]); ++i)
	{
		if (map[node][i] == 1){
			dfs(i);
		}
	}
}

int main()
{
	cin >> nodes;

	for (int i = 0; i < size(map); ++i)
	{
		for (int j = 0; j < size(map[i]); ++j)
		{
			cin >> map[i][j];
		}
	}

	dfs(0);
	return 0;
}