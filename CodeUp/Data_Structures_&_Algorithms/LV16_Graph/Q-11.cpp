#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int arr[4][4] = {};

bool isValid(int y, int x){
	return (arr[y][x] <= 0 && y >= 0 && y < size(arr) && x >= 0 && x < size(arr[0]));
}

int direct[4][2] = {
		-1, 0, // up
		1, 0, //down
		0, 1, // right
		0, -1 // left
};

struct Point{
	int y;
	int x;
	Point(int y, int x) : y(y), x(x) {}
};
int main()
{
	int y;
	int x;

	cin >> y >> x;
	arr[y][x] = 1;

	queue<Point> pointQueue;

	pointQueue.push(Point(y, x));

	while (pointQueue.size() > 0){
		Point point = pointQueue.front();
		pointQueue.pop();

		for (int i = 0; i < size(direct); ++i)
		{
			int newY = point.y + direct[i][0];
			int newX = point.x + direct[i][1];

			if (!isValid(newY, newX)) continue;

			arr[newY][newX] = arr[point.y][point.x] + 1;
			pointQueue.push(Point(newY, newX));
		}
	}

	for (int j = 0; j < size(arr); ++j)
	{
		for (int k = 0; k < size(arr[j]); ++k)
		{
			cout << arr[j][k] << " ";
		}
		cout << endl;
	}

	return 0;
}