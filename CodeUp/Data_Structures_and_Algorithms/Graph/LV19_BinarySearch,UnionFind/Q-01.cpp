#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int parent[256] = {};

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
	for (int i = 0; i < 256; ++i)
	{
		parent[i] = i;
	}

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		char ch1, ch2;
		cin >> ch1 >> ch2;

		if (find(ch1) == find(ch2)){
			cout << "발견";
			return 0;
		}

		unite(ch1, ch2);
	}

	cout << "미발견";

	return 0;
}