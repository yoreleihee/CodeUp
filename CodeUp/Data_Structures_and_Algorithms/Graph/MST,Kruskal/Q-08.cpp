#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// 인접행렬에 node자체를 인덱스로
int graph[10][10] = {
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 1, 1, 0, 0, 0, 1, 0,
		0, 0, 0, 0, 0, 0, 1, 1, 0, 1,
		0, 1, 0, 0, 0, 0, 1, 0, 1, 0,
		0, 1, 0, 0, 0, 0, 0, 1, 1, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 1, 1, 0, 0, 0, 0, 0, 1,
		0, 0, 1, 0, 1, 0, 0, 0, 1, 1,
		0, 1, 0, 1, 1, 0, 0, 1, 0, 0
};

int visited[10] = {};

void bfs(int startNode){
	queue<int> nodeQueue;
	nodeQueue.push(startNode);
	visited[startNode] = 1;

	while (!nodeQueue.empty()){
		int cur = nodeQueue.front();
		nodeQueue.pop();
		cout << cur << endl;

		for (int i = 0; i < size(graph[cur]); ++i)
		{
			if (visited[i] == 1 || graph[cur][i] == 0) continue;

			visited[i] = 1;
			nodeQueue.push(i);
		}
	}
}

int main()
{
	bfs(3);
	return 0;
}