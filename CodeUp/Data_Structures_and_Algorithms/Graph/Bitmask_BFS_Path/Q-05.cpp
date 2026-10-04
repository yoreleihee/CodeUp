#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

// 안나와 엘사는 1초마다 상하좌우로 움직일 수 있다. 두사람이 만나게 될 때, 가장 최소 이동시간을 출력

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

int board[5][5] = {
	0, 0, 0, 1, 0,
	0, 0, 0, 1, 0,
	1, 1, 0, 0, 0,
	0, 0, 1, 0, 0,
	0, 0, 0, 0, 0,
};

// 두 사람이 노드까지 가는데 걸리는 시간을 저장할 변수
int distElsa[5][5];
int distAnna[5][5];

void bfs(Node start, int distArr[][5]) {
	bool visited[5][5] = {};

	queue<Node> q;
	q.push(start);
	visited[start.y][start.x] = true;
	distArr[start.y][start.x] = 0;

	while (!q.empty()) {
		Node cur = q.front();
		q.pop();

		for (int i = 0; i < 4; ++i) {
			int newY = cur.y + direct[i][0];
			int newX = cur.x + direct[i][1];

			if (newY < 0 || newY >= size(board) || newX < 0 || newX >= size(board[0]) || board[newY][newX] == 1) // 1은 통과할 수 없는 벽
				continue;

			if (visited[newY][newX])
				continue;

			visited[newY][newX] = true;
			distArr[newY][newX] = cur.cnt + 1;
			q.push({newY, newX, cur.cnt + 1});
		}
	}
}

int main()
{
	Node start1, start2;
	cin >> start1.y >> start1.x;
	cin >> start2.y >> start2.x;

	fill(&distAnna[0][0], &distAnna[0][0] + 25, -1);
	fill(&distElsa[0][0], &distElsa[0][0] + 25, -1);

	bfs(start1, distElsa);
	bfs(start2, distAnna);

	int answer = INT_MAX;
	int dist;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (distElsa[i][j] == -1 || distAnna[i][j] == -1) continue;

			dist = max(distElsa[i][j], distAnna[i][j]);
			answer = min(answer, dist);
		}
	}

	cout << answer;
	return 0;
}