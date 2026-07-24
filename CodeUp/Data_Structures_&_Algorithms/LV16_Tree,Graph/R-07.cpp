#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int main()
{
	int table[7] = {};

	int arr[4][3] = {
			3, 5, 1,
			3, 1, 2,
			3, 4, 6,
			5, 4, 6
	};

	for (int i = 0; i < size(arr); ++i)
	{
		for (int j = 0; j < size(arr[i]); ++j)
		{
			int idx = arr[i][j];
			table[idx]++;
		}
	}

	for (int i = 1; i < size(table); ++i)
	{
		cout << i << " ";
		for (int j = 0; j < table[i]; ++j)
		{
			cout << "*" << " ";
		}

		cout << endl;
	}
	return 0;
}