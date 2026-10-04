#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int arr[3][3] = {};

	for (int i = 0; i < size(arr); ++i)
	{
		for (int j = 0; j < size(arr[i]); ++j)
		{
			cin >> arr[i][j];
		}
	}

	int first = INT_MIN;
	int firstY = 0;
	int firstX = 0;
	int second = INT_MIN;
	int secondY = 0;
	int secondX = 0;

	for (int i = 0; i < size(arr); ++i)
	{
		for (int j = 0; j < size(arr[i]); ++j)
		{
			int num = arr[i][j];

			if (first < num){
				second = first;
				secondY = firstY;
				secondX = firstX;

				first = num;
				firstY = i;
				firstX = j;
			}
		}
	}

	cout << "첫번째:" << first << "(" << firstY << "," << firstX << ")" << endl;
	cout << "두번째:" << second << "(" << secondY << "," << secondX << ")" << endl;
	return 0;
}