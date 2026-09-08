#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int arr[] = {1, 5, 4, 2, -5, -7};
int n;

int main()
{
	cin >> n;

	for (int i = 0; i < size(arr) - 1; ++i)
	{
		int maxIdx = i;
		for (int j = i + 1; j < size(arr); ++j)
		{
			if (arr[maxIdx] < arr[j]){
				maxIdx = j;
			}
		}

		swap(arr[i], arr[maxIdx]);
	}

	cout << arr[n - 1];
	return 0;
}