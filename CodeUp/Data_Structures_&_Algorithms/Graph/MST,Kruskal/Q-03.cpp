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

			if (newY < 0 || newY >= size(map) || newX < 0 || newX >= size(map[0]) || map[newY][newX] == 1)
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
	int result = bfs({0, 0, 0}, {3, 3, 0});
	cout << result;
	return 0;
}