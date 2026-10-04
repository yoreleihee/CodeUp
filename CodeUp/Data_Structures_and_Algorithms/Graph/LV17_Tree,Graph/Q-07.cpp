#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int map[8];

void bfs(){
	queue<int> intQueue;

	intQueue.push(1);

	while (!intQueue.empty()){
		int now = intQueue.front();
		intQueue.pop();

		cout << map[now] << " ";

		int left = now * 2;
		int right = now * 2 + 1;
		if (left < size(map) && map[left] != 0){
			intQueue.push(left);
		}
		if (right < size(map) && map[right] != 0){
			intQueue.push(right);
		}
	}
}
int main()
{
	for (int i = 0; i < size(map); ++i)
	{
		cin >> map[i];
	}

	bfs();
	return 0;
}