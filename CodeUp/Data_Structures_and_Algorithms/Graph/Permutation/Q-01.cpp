#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

char name[5] = "ABCD";
int graph[4][4] = {
		0, 1, 1, 0,
		1, 0, 1, 1,
		1, 1, 0, 1,
		0, 1, 1, 0,
};

char history[5] = "";
int cnt = 0;

int IsPossible(int level, int select){
	for (int i = 0; i < level; ++i)
	{
		if (history[i] == name[select])
			return 0;
	}
	return 1;
}

void dfs(int level, int now){
	if (name[now] == 'D'){
		cnt++;

		cout << history << endl;
		return;
	}

	for (int i = 0; i < 4; ++i)
	{
		if (graph[now][i] == 1){
			if (IsPossible(level, i) == 1){
				history[level + 1] = name[i];
				dfs(level + 1, i);
				history[level + 1] = 0;
			}
		}
	}
}

int main()
{
	history[0] = name[0];
	dfs(0, 0);

	return 0;
}