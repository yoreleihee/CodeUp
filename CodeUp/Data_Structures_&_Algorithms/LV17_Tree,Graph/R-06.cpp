#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int main()
{
	int wheels[4][3] = {
			{3, 7, 4},
			{2, 6, 9},
			{5, 1, 2},
			{3, 6, 7}
	};

	int nums[4] = {};
	for (int i = 0; i < 4; ++i)
	{
		cin>> nums[i];
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < nums[i]; ++j)
		{
			int temp = wheels[i][2];

			wheels[i][2] = wheels[i][1];
			wheels[i][1] = wheels[i][0];
			wheels[i][0] = temp;
		}
	}

	for (int x = 0; x < 3; ++x)
	{
		for (int y = 0; y < 4; ++y)
		{
			cout << wheels[y][x];
		}

		cout << endl;
	}

	return 0;
}