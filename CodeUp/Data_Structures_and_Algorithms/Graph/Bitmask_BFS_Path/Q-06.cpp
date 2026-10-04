#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

// 두 사람이 연결되기 위한 최소 거리 출력. 사람은 연결되어 있는 #으로 입력된다.

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

char board[8][9] = {};

// 사람의 좌표들을 저장할 변수
vector<Node> personA;
vector<Node> personB;

bool visited[8][9] = {};

// 연결되어있는 #의 좌표를 저장하기 위한 bfs
void bfs(Node start, vector<Node>& person) {
	queue<Node> q;
	q.push(start);
	visited[start.y][start.x] = true;

	while (!q.empty()) {
		Node cur = q.front();
		q.pop();

		person.push_back(cur);

		for (int i = 0; i < 4; ++i) {
			int newY = cur.y + direct[i][0];
			int newX = cur.x + direct[i][1];

			if (newY < 0 || newY >= size(board) || newX < 0 || newX >= size(board[0]))
				continue;

			if (board[newY][newX] != '#')
				continue;

			if (visited[newY][newX])
				continue;

			visited[newY][newX] = true;
			q.push({newY, newX});
		}
	}
}

Node findPerson() {
	for (int i = 0; i < size(board); ++i) {
		for (int j = 0; j < size(board[i]); ++j) {
			if (visited[i][j]) continue;

			if (board[i][j] == '#') return {i, j};
		}
	}
}

int main()
{
	for (int i = 0; i < size(board); ++i) {
		for (int j = 0; j < size(board[i]); ++j) {
			cin >> board[i][j];
		}
	}

	Node personAStart = findPerson();
	bfs(personAStart, personA);

	Node personBStart = findPerson();
	bfs(personBStart, personB);

	int answer = INT_MAX;
	for (int i = 0; i < personA.size(); ++i) {
		for (int j = 0; j < personB.size(); ++j) {
			int distance = abs(personA[i].y - personB[j].y) + abs(personA[i].x - personB[j].x);

			answer = min(answer, distance - 1);
 		}
	}

	cout << answer;
	return 0;
}