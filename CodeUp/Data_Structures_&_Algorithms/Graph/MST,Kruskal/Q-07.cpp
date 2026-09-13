#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int direct[4][2] = {
		-1, 0, // up
		1, 0, // down
		0, -1, // left
		0, 1 // right
};

int board[4][4] = {};

struct Node{
	int y;
	int x;
};
int visited[4][4] = {};

int bfs(Node start){
	queue<Node> nodeQueue;
	nodeQueue.push(start);
	visited[start.y][start.x] = 1;
	int count = 1;

	while (!nodeQueue.empty()){
		Node cur = nodeQueue.front();
		nodeQueue.pop();

		for (int i = 0; i < size(direct); ++i)
		{
			int newY = cur.y + direct[i][0];
			int newX = cur.x + direct[i][1];

			if (newY < 0 || newY >= size(board) || newX < 0 || newX >= size(board[0])
				|| board[newY][newX] == 0)
				continue;

			if (visited[newY][newX] == 1)
				continue;

			visited[newY][newX] = 1;
			count++;

			nodeQueue.push({newY, newX});
		}
	}

	return count;
}
int main()
{
	for (int i = 0; i < size(board); ++i)
	{
		for (int j = 0; j < size(board[i]); ++j)
		{
			cin >> board[i][j];
		}
	}

	int result = bfs({0, 0});
	cout << result;

	return 0;
}