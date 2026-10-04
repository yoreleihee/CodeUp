#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int board[4][4] = {
		0, 0, 0, 0,
		1, 1, 0, 1,
		0, 0, 0, 0,
		0, 1, 1, 0
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
	if (y < 0 || y >= size(board) || x < 0 || x >= size(board[0]) || board[y][x] == 1){
		return false;
	}

	if (visited[y][x] == 1)
		return false;

	return true;
}

int minDistance = INT_MAX;
void dfs(Node node, Node end){
	if (node.cnt >= minDistance)
		return;
	if (node.y == end.y && node.x == end.x){
		minDistance = node.cnt;
		return;
	}

	for (int i = 0; i < size(direct); ++i)
	{
		int newY = node.y + direct[i][0];
		int newX = node.x + direct[i][1];

		if (isPossible(newY, newX)){
			visited[newY][newX] = 1;
			dfs({newY, newX, node.cnt + 1}, end);
			visited[newY][newX] = 0;
		}
	}
}
int main()
{
	visited[0][0] = 1;
	dfs({0, 0}, {3, 3});

	cout << minDistance;
	return 0;
}