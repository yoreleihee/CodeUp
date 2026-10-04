#include <iostream>
#include <vector>

using namespace std;

int parent[256] = {};

void init(){
	for (int i = 0; i < size(parent); ++i)
	{
		parent[i] = i;
	}
}

int find(int x){
	if (parent[x] == x) return x;

	return parent[x] = find(parent[x]);
}
void unite(int a, int b){
	int rootA = find(a);
	int rootB = find(b);
	if (rootA != rootB){
		parent[rootB] = rootA;
	}
}

int main()
{
	init();

	int n;
	cin >> n;

	vector<vector<int>> graph;

	for (int i = 0; i < n; ++i)
	{
		vector<int> temp;
		graph.push_back(temp);

		for (int j = 0; j < n; ++j)
		{
			int num;
			cin >> num;
			graph[i].push_back(num);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			int num = graph[i][j];

			if (num == 1){
				char ch1 = 'A' + i;
				char ch2 = 'A' + j;

				if (find(ch1) == find(ch2)){
					cout << "cycle 발견";
					return 0;
				}
				unite(ch1, ch2);
			}
		}
	}


	return 0;
}