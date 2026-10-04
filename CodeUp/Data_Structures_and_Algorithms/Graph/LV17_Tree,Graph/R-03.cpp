#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int arr[3][3];

int main()
{
	for (int i = 0; i < size(arr); ++i)
	{
		for (int j = 0; j < size(arr[i]); ++j)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < size(arr); ++i)
	{
		int now = arr[i][0];
		bool isSame = true;
		for (int j = 1; j < size(arr[i]); ++j)
		{
			if (now != arr[i][j]){
				isSame = false;
				continue;
			}
		}

		if (isSame){
			cout << now << endl;
		} else{
			cout << "x" << endl;
		}
	}

	return 0;
}