#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int map[6][6] = {};

void bfs(){
	queue<int> intQueue;
	intQueue.push(0);

	while (!intQueue.empty()){
		int now = intQueue.front();

		if (now % 2 == 1){
			cout << now << " ";
		}

		for (int i = 0; i < size(map[now]); ++i)
		{
			if (map[now][i] == 1){
				intQueue.push(i);
			}
		}

		intQueue.pop();
	}
}
int main()
{
	for (int i = 0; i < size(map); ++i)
	{
		for (int j = 0; j < size(map[i]); ++j)
		{
			cin >> map[i][j];
		}
	}

	bfs();

	return 0;
}