#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

struct Point{
	int y;
	int x;
};
string original[3] = {
		"ABCEFG",
		"HIJKLM",
		"NOPQRS"
};
string arr[3] = {

};

Point findIdx(char c){
	for (int i = 0; i < size(original); ++i)
	{
		for (int j = 0; j < original[i].length(); ++j)
		{
			if (c == original[i][j]) return {i, j};
		}
	}

	return {-1, -1};
}

bool isValid(Point point){
	return (point.y >= 0 && point.y < size(original) && point.x >= 0 && point.x < original[0].length());
}

int direct[4][2] = {
		-1, 0,
		1, 0,
		0, 1,
		0, -1
};

void flip(int y, int x){
	if (arr[y][x] == '#'){
		arr[y][x] = original[y][x];
	} else{
		arr[y][x] = '#';
	}
}
int main()
{
	string str;
	cin >> str;

	for (int i = 0; i < 3; ++i)
	{
		arr[i] = original[i];
	}

	for (int i = 0; i < str.length(); ++i)
	{
		Point point = findIdx(str[i]);

		flip(point.y, point.x);

		for (int i = 0; i < size(direct); ++i)
		{
			int newY = point.y + direct[i][0];
			int newX = point.x + direct[i][1];

			if (!isValid({newY, newX})) continue;

			flip(newY, newX);
		}
	}

	for (int i = 0; i < size(arr); ++i)
	{
		cout << arr[i] << endl;
	}

	return 0;
}