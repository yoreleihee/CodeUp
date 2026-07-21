#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int arr[3][4] = {};

	for (int i = 0; i < 4; ++i)
	{
		cin >> arr[0][i];
	}

	arr[1][0] = 1;
	arr[2][0] = 1;

	for (int i = 1; i < size(arr); ++i)
	{
		for (int j = 1; j < size(arr[i]); ++j)
		{
			int upIdxY = i - 1;
			int leftIdxX = j - 1;
			arr[i][j] += arr[upIdxY][j];
			arr[i][j] += arr[i][leftIdxX];
		}
	}

	for (int i = 0; i < size(arr); ++i)
	{
		for (int j = 0; j < size(arr[i]); ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}