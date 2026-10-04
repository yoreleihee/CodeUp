#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

// board에 섬이 몇개인지 새는 문제. 섬은 상하좌우로 이어져있을 수 있으며 이어지지 않은 섬만 개수로 샐 수 있다.

int direct[4][2] = {
		-1, 0, // up
		1, 0, // down
		0, -1, // left
		0, 1 // right
};

struct Node{
	int y;
	int x;
};

int board[5][8] = {};
bool visited[5][8] = {};

void findIslandBfs(Node start){
	queue<Node> nodeQueue;
	nodeQueue.push(start);

	while (!nodeQueue.empty()){
		Node cur = nodeQueue.front();
		nodeQueue.pop();

		for (int i = 0; i < size(direct); ++i)
		{
			int newY = cur.y + direct[i][0];
			int newX = cur.x + direct[i][1];

			// board 범위 벗어나면 건너뜀
			if (newY < 0 || newY >= size(board) || newX < 0 || newX >= size(board[0]))
				continue;

			// 섬이 아닌 경우 건너뜀
			if (board[newY][newX] == 0)
				continue;

			// 이어져있는 섬은 방문한 노드로 처리한다.
			if (visited[newY][newX] == true)
				continue;

			visited[newY][newX] = true;
			Node next{newY, newX};

			nodeQueue.push(next);
		}
	}
}

int main()
{

	for (int i = 0; i < size(board); ++i) {
		for (int j = 0; j < size(board[i]); ++ j) {
			cin >> board[i][j];
		}
	}

	int cnt = 0;

	for (int i = 0; i < size(board); ++i) {
		for (int j = 0; j < size(board[i]); ++j) {
			// 방문하지 않은 노드만 검사한다.
			if (visited[i][j])
				continue;

			// 바다는 건너띔
			if (board[i][j] == 0)
				continue;

			visited[i][j] = true;

			cnt++;
			findIslandBfs({i, j});
		}
	}


	cout << cnt;

	return 0;
}