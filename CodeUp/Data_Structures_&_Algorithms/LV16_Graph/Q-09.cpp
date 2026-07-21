#include <iostream>
#include <vector>

using namespace std;

int direct[8][2] = {
		-1, 0, // up
		-1, 1, // right up
		-1, -1, // left up
		0, -1, // left
		0, 1, //right
		1, 0, // down
		1, 1, // right down
		1, -1, // left down
};

char arr[4][4] = {};

bool isValid(int y, int x){
	return (y >= 0 && y < size(arr) && x >= 0 && x < size(arr[0]) && arr[y][x] != '#');
}

void setWall(int y, int x){
	for (int i = 0; i < size(direct); ++i)
	{
		int newY = y + direct[i][0];
		int newX = x + direct[i][1];

		if (!isValid(newY, newX)){
			continue;
		}

		arr[newY][newX] = '@';
	}
}
int main()
{
	memset(arr, '_', sizeof(arr));

	int house[3][2] = {};
	for (int i = 0; i < size(house); ++i)
	{
		for (int j = 0; j < size(house[i]); ++j)
		{
			cin >> house[i][j];
		}
	}

	for (int i = 0; i < size(house); ++i)
	{
		arr[house[i][0]][house[i][1]] = '#';
	}

	for (int i = 0; i < size(house); ++i)
	{
		setWall(house[i][0], house[i][1]);
	}

	for (int i = 0; i < size(arr); ++i)
	{
		cout << arr[i] << endl;
	}

	return 0;
}