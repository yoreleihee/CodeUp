#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int map[6][6] = {
		0, 1, 0, 0, 1, 0,
		0, 0, 1, 0, 0, 1,
		0, 0, 0, 1, 0, 0,
		0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0,
};

void bfs(int node){
	queue<int> intQueue;
	intQueue.push(node);

	while (!intQueue.empty()){
		int now = intQueue.front();
		intQueue.pop();

		cout << now << " ";

		for (int i = 0; i < size(map[now]); ++i)
		{
			if (map[now][i] == 1){
				intQueue.push(i);
			}
		}
	}
}

int main()
{
	int startNode;
	cin >> startNode;

	bfs(startNode);

	return 0;
}