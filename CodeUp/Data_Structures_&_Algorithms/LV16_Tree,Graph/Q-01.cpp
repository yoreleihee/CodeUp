#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int main()
{
	int n;
	int arr[100][100] = {};

	int node = 0;
	int boss;
	list<int> child;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> arr[i][j];

			if (j == node && arr[i][j] == 1){
				boss = i;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (arr[node][i] == 1){
			child.push_back(i);
		}
	}

	cout << "boss:" << boss << endl;
	cout << "under:";
	for (auto &p : child)
	{
		cout << p << " ";
	}

	return 0;
}