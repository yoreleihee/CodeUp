#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int main()
{
	int map[4][5] = {};

	int minY = INT_MAX;
	int maxY = 0;
	int minX = INT_MAX;
	int maxX = 0;

	for (int i = 0; i < size(map); ++i)
	{
		for (int j = 0; j < size(map[i]); ++j)
		{
			cin >> map[i][j];

			if (map[i][j] == 1){
				minY = min(minY, i);
				maxY = max(maxY, i);
				minX = min(minX, j);
				maxX = max(maxX, j);
			}
		}
	}

	cout << "(" << minY << "," << minX << ")" << endl;
	cout << "(" << maxY << "," << maxX << ")" << endl;

	return 0;
}