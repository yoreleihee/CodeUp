#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int main()
{
	int graph[8][8] = {
			0, 1, 1, 1, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 1, 1, 1, 0,
			0, 0, 0, 0, 0, 0, 0, 1,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0
	};

	char node;
	cin >> node;

	string str = "ABHCDGEF";

	int nodeIdx = str.find(node);

	int parentNodeIdx = -1;
	for (int i = 0; i < size(graph); ++i)
	{
		if (graph[i][nodeIdx] == 1){
			parentNodeIdx = i;
		}
	}

	if (parentNodeIdx == -1){
		cout << "없음";
		return 0;
	}
	list<int> sibling;
	for (int i = 0; i < 8; ++i)
	{
		if (graph[parentNodeIdx][i] == 1 && i != nodeIdx){
			sibling.push_back(i);
		}
	}

	for (auto &p : sibling)
	{
		cout << str[p] << " ";
	}
	return 0;
}