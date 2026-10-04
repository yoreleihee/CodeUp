#include <iostream>
#include <vector>
#include <queue>
using namespace std;

char grid[1000][1000];
int n, k;
int direct1[5][2] = {
		{-1, 0},
		{ 0, 0},
		{ 0,-1},
		{ 0, 1},
		{ 1, 0}
};

int direct2[5][2] = {
		{-1,-1},
		{ 0, 0},
		{-1, 1},
		{ 1, 1},
		{ 1,-1}
};
int main() {
	cin >> n >> k;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
			cin >> grid[i][j];
	}

	for (int i = 0; i < k; i++) {
		int y, x, m;
		cin >> y >> x >> m;

		for (int j = 0; j < 5; j++) {
			int newY;
			int newX;
			if (m == 1) {
				newY = y + direct1[j][0];
				newX = x + direct1[j][1];
			} else {
				newY = y + direct2[j][0];
				newX = x + direct2[j][1];
			}

			if (newY < 0 || newY >= n || newX < 0 || newX >= n) continue;

			cout << grid[newY][newX];
		}
		cout << endl;
	}

	return 0;
}