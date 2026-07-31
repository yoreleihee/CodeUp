#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

string value = "ABCDEFGHIJ";

int map[10][10] = {
		0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 1, 1, 1, 1, 0, 0,0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0,0,
		0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void bfs(int startNode){
	queue<int> intQueue;
	intQueue.push(startNode);

	while (!intQueue.empty()){
		int now = intQueue.front();
		intQueue.pop();

		cout << value[now] << " ";

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
	char ch;
	cin >> ch;

	bfs(ch - 'A');
	return 0;
}