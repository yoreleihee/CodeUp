#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int arr[5][4] = {};

int main()
{
	for (int i = 0; i < size(arr); ++i)
	{
		for (int j = 0; j < size(arr[i]); ++j)
		{
			cin>> arr[i][j];
		}
	}

	int newArr[5][4] = {};
	int writeIdx = size(newArr) - 1;

	for (int y = size(arr) - 1; y >= 0; --y)
	{
		bool isFill = true;
		for (int x = 0; x < size(arr[y]); ++x)
		{
			if (arr[y][x] == 0){
				isFill = false;
				break;
			}
		}

		if (!isFill){
			for (int i = 0; i < size(arr[y]); ++i)
			{
				newArr[writeIdx][i] = arr[y][i];
			}

			writeIdx--;
		}
	}

	for (int i = 0; i < size(newArr); ++i)
	{
		for (int j = 0; j < size(newArr[i]); ++j)
		{
			cout << newArr[i][j] << " ";
		}

		cout << endl;
	}
	return 0;
}