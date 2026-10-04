#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int graph[5][5] = {
			0, 0, 0, 1, 0, // amy
			1, 0, 0, 0, 0, // bob
			0, 1, 0, 0, 0, // chloe
			0, 0, 0, 0, 0, // edger
			0, 1, 0, 0, 0, // diane
	};

	string people[5] = {
			"Amy", "Bob", "Chloe", "Edger", "Diane"
	};

	int maxCount = 0;
	int maxIdx = 0;

	for (int x = 0; x < 5; ++x)
	{
		int count = 0;
		for (int y = 0; y < 5; ++y)
		{
			if (graph[y][x] == 1){
				count++;
			}
		}

		if (maxCount < count){
			maxCount = count;
			maxIdx = x;
		}
	}

	cout << people[maxIdx];

	return 0;
}