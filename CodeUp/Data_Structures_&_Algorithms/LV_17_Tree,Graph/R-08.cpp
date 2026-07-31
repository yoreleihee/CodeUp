#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

char map[4][3] = {};

struct Point{
	int x;
	int y;
};

bool isValid(int y, int x){
	return (y >= 0 && y < size(map) && x >= 0 && x < size(map[0]) && map[y][x] == '_');
}

int direct[4][2] = {
		0, 1,
		1, 0,
		0, -1,
		-1, 0
};

void move(Point* monster, int dirIdx){
	int newY = monster->y + direct[dirIdx][0];
	int newX = monster->x + direct[dirIdx][1];

	if (isValid(newY, newX)){
		swap(map[monster->y][monster->x], map[newY][newX]);
		monster->y = newY;
		monster->x = newX;
	}
}

int main()
{
	Point a;
	Point c;
	Point d;

	for (int i = 0; i < size(map); ++i)
	{
		for (int j = 0; j < size(map[i]); ++j)
		{
			cin >> map[i][j];

			if (map[i][j] == 'A'){
				a.x = j;
				a.y = i;
			}
			else if (map[i][j] == 'C'){
				c.x = j;
				c.y = i;
			}
			else if (map[i][j] == 'D'){
				d.x = j;
				d.y = i;
			}
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		int dirIdx = i % 4;

		move(&a, dirIdx);
		move(&c, dirIdx);
		move(&d, dirIdx);
	}

	for (int i = 0; i < size(map); ++i)
	{
		for (int j = 0; j < size(map[i]); ++j)
		{
			cout << map[i][j];
		}

		cout << endl;
	}

	return 0;
}