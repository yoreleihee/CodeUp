#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

// 1은 상하좌우 기준으로 3칸 이상, 2는 상하좌우 기준으로 4칸 이상 떨어져 있는지 검사하는 프로그램

int direct[4][2] = {
		-1, 0, // up
		1, 0, // down
		0, -1, // left
		0, 1 // right
};

struct Node{
	int y;
	int x;
	int cnt;
};

char board[7][7] = {};

bool isValid(Node start, char target, int minDistance) {
	bool visited[7][7] = {};

	queue<Node> q;
	q.push(start);
	visited[start.y][start.x] = true;

	while (!q.empty()) {
		Node cur = q.front();
		q.pop();

		for (int i = 0; i < 4; ++i) {
			int newY = cur.y + direct[i][0];
			int newX = cur.x + direct[i][1];
			int nextCnt = cur.cnt + 1;

			if (newY < 0 || newY >= 7 || newX < 0 || newX >= 7)
				continue;

			if (visited[newY][newX])
				continue;

			// 최소 거리 이상이면 안전하므로 그 방향은 더 탐색할 필요 없음
			if (nextCnt >= minDistance)
				continue;

			// 최소 거리 미만에서 같은 종류를 만나면 false
			if (board[newY][newX] == target)
				return false;

			visited[newY][newX] = true;
			q.push({newY, newX, nextCnt});
		}
	}

	return true;
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
			if (board[i][j] == '1') {
				if (!isValid({i, j, 0}, '1', 3)){
					cout << "fail";
					return 0;
				}
			}
			if (board[i][j] == '2') {
				if (!isValid({i, j, 0}, '2', 4)) {
					cout << "fail";
					return 0;
				}
			}
		}
	}

	cout << "pass";

	return 0;
}