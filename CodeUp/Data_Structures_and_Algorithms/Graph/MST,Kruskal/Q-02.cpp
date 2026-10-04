#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int map[3][3] = {};

int direct[4][2] = {
		-1, 0, // up
		1, 0, // down
		0, -1, // left
		0, 1 // right
};

int result[3][3] = {};

struct Node{
	int y;
	int x;
	int value;
};
void bfs(Node start1, Node start2){
	queue<Node> nodeQueue;
	nodeQueue.push(start1);
	nodeQueue.push(start2);

	while (!nodeQueue.empty()){
		Node cur = nodeQueue.front();
		nodeQueue.pop();

		for (int i = 0; i < size(direct); ++i)
		{
			int newY = direct[i][0] + cur.y;
			int newX = direct[i][1] + cur.x;

			if (newY < 0 || newY >= size(map) || newX < 0 || newX >= size(map[0]))
				continue;

			if (result[newY][newX] > 0) continue;

			result[newY][newX] = cur.value + 1;
			nodeQueue.push({newY, newX, cur.value + 1});
		}
	}
}
int main()
{
	result[0][0] = 1;
	result[2][2] = 1;

	bfs({0, 0, 1}, {2, 2, 1});

	for (int i = 0; i < size(result); ++i)
	{
		for (int j = 0; j < size(result[i]); ++j)
		{
			cout << result[i][j];
		}
		cout << endl;
	}

	return 0;
}