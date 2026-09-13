#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int board[4][5] = {};

struct Node{
	int y;
	int x;
	int cnt = 0;
};
int visited[4][6] = {};
int direct[8][2] = {
		-1, 0, // up
		1, 0, // down
		0, -1, // left
		0, 1, // right
		-1, -1,
		-1, 1,
		1, -1,
		1, 1
};

queue<Node> nodeQueue;

int bfs(){
	Node cur;
	while (!nodeQueue.empty()){
		cur = nodeQueue.front();
		nodeQueue.pop();

		for (int i = 0; i < size(direct); ++i)
		{
			int newY = cur.y + direct[i][0];
			int newX = cur.x + direct[i][1];

			if (newY < 0 || newY >= size(board) || newX < 0 || newX >= size(board[0]))
				continue;

			if (visited[newY][newX] == 1)
				continue;

			visited[newY][newX] = 1;
			nodeQueue.push({newY, newX, cur.cnt + 1});
		}
	}
	return cur.cnt;
}
int main()
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cin >> board[i][j];

			if (board[i][j] == 1)
			{
				nodeQueue.push({i, j, 0});
				visited[i][j] = 1;
			}
		}
	}

	cout << bfs();

	return 0;
}