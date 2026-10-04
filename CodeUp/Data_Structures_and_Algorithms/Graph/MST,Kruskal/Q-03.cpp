#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int map[4][4] = {
		0, 0, 0, 0,
		1, 1, 0, 1,
		0, 0, 0, 0,
		1, 0, 1, 0
};

int direct[4][2] = {
		-1, 0, // up
		1, 0, // down
		0, -1, // left
		0, 1 // right
};

struct Node{
	int y;
	int x;
	int cnt = 0;
};
int visited[4][4] = {};

bool isPossible(int y, int x){
	if (y < 0 || y >= size(map) || x < 0 || x >= size(map[0]) || map[y][x] == 1)
		return false;

	if (visited[y][x] == 1)
		return false;

	return true;
}

int dfs(Node node, Node end){
	if (node.y == end.y && node.x == end.x)
	{
		return node.cnt;
	}

	int minValue = INT_MAX;

	for (int i = 0; i < size(direct); ++i)
	{
		int newY = node.y + direct[i][0];
		int newX = node.x + direct[i][1];

		if (!isPossible(newY, newX)) continue;

		visited[newY][newX] = 1;
		int cnt = dfs({newY, newX, node.cnt + 1}, end);
		visited[newY][newX] = 0;

		minValue = min(cnt, minValue);
	}

	return minValue;
}
int bfs(Node start, Node end){
	queue<Node> nodeQueue;
	nodeQueue.push(start);
	visited[start.y][start.x] = 1;

	while (!nodeQueue.empty()){
		Node cur = nodeQueue.front();
		nodeQueue.pop();

		if (end.y == cur.y && end.x == cur.x){
			return cur.cnt;
		}

		for (int i = 0; i < size(direct); ++i)
		{
			int newY = cur.y + direct[i][0];
			int newX = cur.x + direct[i][1];

			if (!isPossible(newY, newX)) continue;

			visited[newY][newX] = 1;
			nodeQueue.push({newY, newX, cur.cnt + 1});
		}
	}

	return -1;
}
int main()
{
//	int bfsResult = bfs({0, 0, 0}, {3, 3, 0});
//	cout << bfsResult;

	visited[0][0] = 1;
	int dfsResult = dfs({0, 0, 0}, {3, 3, 0});
	cout << dfsResult;
	return 0;
}