#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

string cards = "ABC";
char path[4] = {};
int visited[3] = {};

void recursive(int level){
	if (level == 3){
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 3; ++i)
	{
		if (visited[i] == 1) continue;

		visited[i] = 1;
		path[level] = cards[i];
		recursive(level + 1);
		visited[i] = 0;
		path[level] = 0;
	}
}
int main()
{
	recursive(0);

	return 0;
}