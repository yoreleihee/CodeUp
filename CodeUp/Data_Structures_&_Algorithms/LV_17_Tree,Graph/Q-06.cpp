#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

string str;
int map[5][5] = {
		0, 1,  1, 0, 0,
		0, 0, 0, 1, 1,
		0, 0, 0, 0, 0,
		0, 0, 0, 0, 0,
		0, 0, 0, 0, 0,
};

void dfs(int node){
	if (node >= str.length()) return;

	cout << str[node];

	for (int i = 0; i < size(map[node]); ++i)
	{
		if (map[node][i] == 1){
			dfs(i);
		}
	}
}

int main()
{
	cin >> str;

	dfs(0);

	return 0;
}