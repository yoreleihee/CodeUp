#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int board[4][6] = {};

struct Node{
	int y;
	int x;
};
int visited[4][6] = {};
int direct[4][2] = {
		-1, 0, // up
		1, 0, // down
		0, -1, // left
		0, 1 // right
};

// 총 치킨의 개수 반환
int bfs(Node start, Node end){
	queue<Node> nodeQueue;
	nodeQueue.push(start);
	visited[start.y][start.x] = 1;

	int cnt = 0;
	while (!nodeQueue.empty()){
		Node cur = nodeQueue.front();
		nodeQueue.pop();

		if (board[cur.y][cur.x] == 2){
			cnt++;
		}
		for (int i = 0; i < size(direct); ++i)
		{
			int newY = cur.y + direct[i][0];
			int newX = cur.x + direct[i][1];

			if (newY < 0 || newY >= size(board) || newX < 0 || newX >= size(board[0])
			    || board[newY][newX] == 1)
				continue;

			if (visited[newY][newX] == 1)
				continue;

			visited[newY][newX] = 1;
			nodeQueue.push({newY, newX});
		}
	}
	return cnt;
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

	cout << bfs({0, 0}, {3, 5});

	return 0;
}