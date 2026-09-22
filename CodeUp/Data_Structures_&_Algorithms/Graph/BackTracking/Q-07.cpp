#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

// 경로 최소 시간 찾기
int graph[4][4] = {
		0, 80, 40, 0, // G
		80, 0, 30, 60, // N
		40, 30, 0, 70, // Y
		0, 60, 70, 0, // D
};

char city[] = "GNYD";

int cityToIdx(char ch){
	for (int i = 0; i < 4; ++i)
	{
		if (ch == city[i]) return i;
	}

	return -1;
}
int target = cityToIdx('G');
int visited[4] = {};

int dfs(int node, int value, int minValue){
	if (node == target){
		if (value < minValue){
			minValue = value;
		}
		return minValue;
	}

	for (int i = 0; i < size(graph[node]); ++i)
	{
		if (visited[i] == 1) continue;
		if (graph[node][i] == 0) continue;

		visited[i] = 1;
		int cost = value + graph[node][i];
		int result = dfs(i, cost, minValue);
		visited[i] = 0;

		minValue = min(result, minValue);
	}

	return minValue;
}

struct Node{
	int idx;
	int value;
	bool visited[4];
};

int bfs(int start){
	queue<Node> nodeQueue;
	Node first{};
	first.idx = start;
	first.value = 0;
	first.visited[start] = true;
	nodeQueue.push(first);

	int minValue = INT_MAX;

	while (!nodeQueue.empty()){

		Node curr = nodeQueue.front();
		nodeQueue.pop();

		curr.visited[curr.idx] = true;

		if (curr.idx == target){
			minValue = min(curr.value, minValue);
			continue;
		}

		for (int i = 0; i < size(graph[curr.idx]); ++i)
		{
			if (curr.visited[i]) continue;
			if (graph[curr.idx][i] == 0) continue;


			int cost = curr.value + graph[curr.idx][i];

			Node next {};
			next.idx = i;
			next.value = cost;
			memcpy(next.visited, curr.visited, sizeof(curr.visited));
			nodeQueue.push(next);
		}
	}

	return minValue;
}

int main()
{
	int start = cityToIdx('N');
	visited[start] = 1;
//	int min = dfs(start, 0, INT_MAX);
	int min = bfs(start);
	cout << min;

	return 0;
}