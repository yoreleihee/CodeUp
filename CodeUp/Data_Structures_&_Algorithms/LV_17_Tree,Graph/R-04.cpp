#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int main()
{
	int arr1[4];
	int arr2[4];

	for (int i = 0; i < size(arr1); ++i)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < size(arr2); ++i)
	{
		cin >> arr2[i];
	}

	int result[8];

	int idx1 = 0;
	int idx2 = 0;

	int resultIdx = 0;
	while (idx1 < size(arr1) && idx2 < size(arr2)){
		if (arr1[idx1] > arr2[idx2]){
			result[resultIdx++] = arr2[idx2++];
		} else{
			result[resultIdx++] = arr1[idx1++];
		}
	}

	while (idx1 < size(arr1)){
		result[resultIdx++] = arr1[idx1++];
	}

	while (idx2 < size(arr2)){
		result[resultIdx++] = arr2[idx2++];
	}

	for (int i = 0; i < size(result); ++i)
	{
		cout << result[i] << " ";
	}
	return 0;
}