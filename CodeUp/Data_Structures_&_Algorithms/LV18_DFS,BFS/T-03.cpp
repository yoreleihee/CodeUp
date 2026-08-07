#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void rotate(int arr[3][3]){
	int temp[3][3] = {};
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			temp[i][j] = arr[j][2 - i];

	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			arr[i][j] = temp[i][j];
}

bool isEqual(int arrA[3][3], int arrB[3][3]){
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (arrA[i][j] != arrB[i][j]){
				return false;
			}
		}
	}

	return true;
}
int main()
{
	int arrA[3][3] = {};
	int arrB[3][3] = {};
	for (int i = 0; i < size(arrA); ++i)
	{
		for (int j = 0; j < size(arrA[i]); ++j)
		{
			cin >> arrA[i][j];
		}
	}

	for (int i = 0; i < size(arrB); ++i)
	{
		for (int j = 0; j < size(arrB[i]); ++j)
		{
			cin >> arrB[i][j];
		}
	}

	for (int count = 0; count <= 4; ++count){
		if (isEqual(arrA, arrB)){
			cout << count;
			return 0;
		}
		rotate(arrA);
	}

	return 0;
}