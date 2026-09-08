#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int graph[4][4] = {};

	for (int i = 0; i < size(graph); ++i)
	{
		for (int j = 0; j < size(graph[i]); ++j)
		{
			cin >> graph[i][j];
		}
	}

	int maxNode = 0;
	int maxCount = 0;

	for (int i = 0; i < size(graph); ++i)
	{
		int count = 0;
		for (int j = 0; j < size(graph[i]); ++j)
		{
			if (graph[i][j] == 1){
				count++;
			}
		}

		if (maxCount < count){
			maxNode = i;
			maxCount = count;
		}
	}

	cout << char(maxNode + 'A');

	return 0;
}