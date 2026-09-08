#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int main()
{
	int arr[5] = {};

	for (int i = 0; i < 5; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < size(arr) - 1; ++i)
	{
		if (arr[i] >= arr[i + 1]){
			cout << "증가안됨";
			return 0;
		}
	}

	cout << "증가됨";
	return 0;
}