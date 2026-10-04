#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
	char arr[5][6] = {};

	for (int i = 0; i < size(arr); ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 5; ++i)
	{
		swap(arr[i][1], arr[i][3]);
	}

	for (int i = 0; i < 5; ++i)
	{
		string str = arr[i];

		if (str == "MAPOM"){
			cout << "yes";
			return 0;
		}
	}

	cout << "no";
	return 0;
}