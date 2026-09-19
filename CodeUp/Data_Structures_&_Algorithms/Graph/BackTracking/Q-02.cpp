#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

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

int board[4][4] = {
		0, 0, 0, 0,
		1, 1, 0, 1,
		0, 0, 0, 0,
		0, 1, 1, 0
};

int visited[4][4] = {};
int dfs(Node node, Node end){
	if (node.y == end.y && node.x == end.x){

		return node.cnt;
	}

	int minValue = INT_MAX;
	for (int i = 0; i < size(direct); ++i)
	{
		int newY = node.y + direct[i][0];
		int newX = node.x + direct[i][1];

		if (newY < 0 || newY >= size(board) || newX < 0 || newX >= size(board[0])
		    || board[newY][newX] == 1)
			continue;

		if (visited[newY][newX] == 1)
			continue;

		visited[newY][newX] = 1;
		int result = dfs({newY, newX, node.cnt + 1}, end);
		minValue = min(minValue, result);
		visited[newY][newX] = 0;
	}

	return minValue;
}

int main()
{
	int result = dfs({0, 0}, {3, 3});

	cout << result;
	return 0;
}