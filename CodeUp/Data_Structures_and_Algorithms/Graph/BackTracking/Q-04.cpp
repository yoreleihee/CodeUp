#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int board[3][3] = {};

int direct[4][2] = {
		-1, 0, // up
		1, 0, // down
		0, -1, // left
		0, 1 // right
};

int visited[4][4] = {};

struct Node{
	int y;
	int x;
};
bool dfs(Node node){
	if (node.y == 2 && node.x == 2){
		return true;
	}

	bool result = false;
	for (int i = 0; i < size(direct); ++i)
	{
		int newY = node.y + direct[i][0];
		int newX = node.x + direct[i][1];

		if (newY < 0 || newY >= size(board) || newX < 0 || newX >= size(board[0])
		    || board[newY][newX] == 1)
			continue;

		if (visited[newY][newX] == 1)
			continue;

		visited[newY][newX] = 1;
		result = dfs({newY, newX});
		if (result) break;
	}

	return result;
}
int main()
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin >> board[i][j];
		}
	}

	bool result = dfs({0, 0});

	cout << (result ? "가능" : "불가능");

	return 0;
}