#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

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

char board[3][5] = {};
int bfs(Node start, Node end){
	int visited[3][5] = {};

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
			    || board[newY][newX] == '#')
				continue;

			if (visited[newY][newX] == 1)
				continue;

			visited[newY][newX] = 1;
			nodeQueue.push({newY, newX, cur.cnt + 1});
		}
	}

	return -1;
}

Node minDistanceNode(Node start, vector<Node>& region){
	int min = INT_MAX;
	Node minDistanceNode;
	for (int i = 0; i < region.size(); ++i)
	{
		int result = bfs(start, region[i]);
		if (min > result){
			min = result;
			minDistanceNode = region[i];
			minDistanceNode.cnt = result;
		}
	}

	return minDistanceNode;
}
int main()
{
	vector<Node> region1Vec;
	vector<Node> region2Vec;
	vector<Node> region3Vec;
	vector<Node> region4Vec;
	for (int i = 0; i < size(board); ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			char ch = 0;
			cin >> ch;
			board[i][j] = ch;

			switch (ch)
			{
				case '1':
					region1Vec.push_back({i, j});
					break;
				case '2':
					region2Vec.push_back({i, j});
					break;
				case '3':
					region3Vec.push_back({i, j});
					break;
				case '4':
					region4Vec.push_back({i, j});
					break;
			}
		}
	}

	// 최단거리 지역 찾기
	Node region1 = minDistanceNode({0, 0}, region1Vec);
	Node region2 = minDistanceNode(region1, region2Vec);
	Node region3 = minDistanceNode(region2, region3Vec);
	Node region4 = minDistanceNode(region3, region4Vec);

	cout << region4.cnt;
	return 0;
}