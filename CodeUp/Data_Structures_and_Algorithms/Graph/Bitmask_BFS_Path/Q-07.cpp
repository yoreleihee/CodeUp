#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

// 5칸의 입구와 2개의 미닫이 문이 있다. 최소 횟수로 미닫이 문 A, B를 밀어 모든 고객을 입장시켜야 함
// 문은 1로 입력됨

int board[5] = {};
int customer[] = {0, 1, 0, 1, 0, 1, 2, 3, 2, 3, 2, 3}; // 손님이 입장하는 문

struct Node {
	int aIdx = -1;
	int bIdx = -1;
	int cnt = 0;
	int customerIdx = 0;
};

// 좌, 우로 문을 움직일 방향
int direct[4][2] = {
	-1, 0, // A를 왼쪽
	1, 0, // A를 오른쪽
	0, -1, // B를 왼쪽
	0, 1, // B를 오른쪽
};

int bfs(Node start) {
	queue<Node> q;
	q.push(start);

	while (!q.empty()) {
		Node cur = q.front();
		q.pop();

		int customerIdx = cur.customerIdx;
		while (customerIdx < size(customer)
			&& customer[customerIdx] != cur.aIdx
			&& customer[customerIdx] != cur.bIdx) {
			customerIdx++;
		}

		if (customerIdx >= size(customer)) {
			return cur.cnt;
		}

		for (int i = 0; i < size(direct); ++i) {
			int newA = cur.aIdx + direct[i][0];
			int newB = cur.bIdx + direct[i][1];

			if (newA < 0 || newA >= size(board) || newB < 0 || newB >= size(board))
				continue;

			if (newA == newB) // 문이 겹치는 경우 건너뜀
				continue;

			q.push({newA, newB, cur.cnt + 1, customerIdx});
		}
	}

	return -1;
}

int main()
{
	Node start{};
	for (int i = 0; i < size(board); ++i) {
		cin >> board[i];
		if (board[i] == 1) {
			if (start.aIdx == -1) {
				start.aIdx = i;
			}
			else {
				start.bIdx = i;
			}
		}
	}


	bfs(start);

	return 0;
}