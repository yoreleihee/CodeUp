#include <iostream>
#include <vector>

using namespace std;

int direct[4][2] = {
		-1, 0, // up
		0, -1, // left
		0, 1, // right
		1, 0, // down
};

int map[4][4] = {};

bool isValid(int y, int x){
	return (y >= 0 && y < size(map) && x >= 0 && x < size(map[0]));
}

bool isSafe(int y, int x){
	for (int i = 0; i < size(direct); ++i)
	{
		int newY = y + direct[i][0];
		int newX = x + direct[i][1];

		if (isValid(newY, newX)){
			if (map[newY][newX] == 1){
				return false;
			}
		}
	}

	return true;
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

	for (int i = 0; i < size(map); ++i)
	{
		for (int j = 0; j < size(map); ++j)
		{
			if (map[i][j] == 0){
				continue;
			}

			if (!isSafe(i, j)){
				cout << "위험한 상태";
				return 0;
			}
		}
	}

	cout << "안전한 상태";

	return 0;
}