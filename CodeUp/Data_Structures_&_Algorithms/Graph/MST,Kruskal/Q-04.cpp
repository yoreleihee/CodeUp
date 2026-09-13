#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int board[3][5] = {
		0, 0, 0, 0, 1,
		1, 0, 1, 0, 0,
		0, 0, 0, 0, 1
};

struct Node{
	int y;
	int x;
	int cnt = 0;
};
int direct[4][2] = {
		-1, 0, // up
		1, 0, // down
		0, -1, // left
		0, 1 // right
};

int bfs(Node start, Node end){
	int visited[5][3] = {};

	queue<Node> nodeQueue;
	nodeQueue.push(start);
	visited[start.y][start.x] = 1;

	while (!nodeQueue.empty()){
		Node cur = nodeQueue.front();
		nodeQueue.pop();

		if (cur.y == end.y && cur.x == end.x){
			return cur.cnt;
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
			nodeQueue.push({newY, newX, cur.cnt + 1});
		}
	}

	return -1;
}
int main()
{
	Node cheeseNode{2, 0, 0};
	Node friendNode{0, 3, 0};

	int cheeseDistance = bfs({0, 0, 0}, cheeseNode);
	int friendDistance = bfs(cheeseNode, friendNode);

	cout << (cheeseDistance + friendDistance);

	return 0;
}