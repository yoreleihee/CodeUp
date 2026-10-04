#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

// board에서 이어져있는 값들 중 개수가 가장 많은 값을 찾아, 값 * 값의 개수를 알아내는 문제

int direct[4][2] = {
		-1, 0, // up
		1, 0, // down
		0, -1, // left
		0, 1 // right
};

struct Node{
	int y;
	int x;
	int value;
};

int board[4][9] = {};
bool visited[4][9] = {};

// max 값과 개수를 저장하기 위한 변수
int maxCnt = 0;
int maxValue = 0;

int bfs(Node start){
	queue<Node> nodeQueue;
	nodeQueue.push(start);

	int cnt = 1;
	while (!nodeQueue.empty()){
		Node cur = nodeQueue.front();
		nodeQueue.pop();

		for (int i = 0; i < size(direct); ++i)
		{
			int newY = cur.y + direct[i][0];
			int newX = cur.x + direct[i][1];

			if (newY < 0 || newY >= size(board) || newX < 0 || newX >= size(board[0]))
				continue;

			if (visited[newY][newX] == true)
				continue;

			// 현재 값과 새로운 노드의 값이 다르면 큐에 넣지 않음
			if (board[newY][newX] != cur.value)
				continue;

			visited[newY][newX] = true;
			cnt++;
			Node next{newY, newX, board[newY][newX]};

			nodeQueue.push(next);
		}
	}
	return cnt;
}

int main()
{

	for (int i = 0; i < size(board); ++i) {
		for (int j = 0; j < size(board[i]); ++ j) {
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < size(board); ++i) {
		for (int j = 0; j < size(board[i]); ++j) {
			// 방문한 노드는 카운트를 세지 않음
			if (visited[i][j])
				continue;

			visited[i][j] = true;

			// 노드 별 이어져있는 개수 반환
			int cnt = bfs({i, j, board[i][j]});

			if (maxCnt < cnt) {
				maxCnt = cnt;
				maxValue = board[i][j];
			}
		}
	}


	cout << maxValue * maxCnt;

	return 0;
}