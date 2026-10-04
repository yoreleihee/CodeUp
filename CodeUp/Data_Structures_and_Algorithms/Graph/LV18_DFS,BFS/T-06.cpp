#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Point{
	int y;
	int x;
	int value;
};

int main()
{
	int y, x;
	cin >> y >> x;

	vector<Point> arr;
	for (int i = 0; i < y; ++i)
	{
		for (int j = 0; j < x; ++j)
		{
			int value;
			cin >> value;
			arr.push_back({i, j, value});
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		Point max;
		max.value = 0;
		int maxIdx = 0;
		for (int j = 0; j < arr.size(); ++j)
		{
			if (max.value < arr[j].value)
			{
				max = arr[j];
				maxIdx = j;
			}
		}

		cout << max.value << "(" << max.y << "," << max.x << ")" << endl;
		arr.erase(arr.begin() + maxIdx);
	}
	return 0;
}