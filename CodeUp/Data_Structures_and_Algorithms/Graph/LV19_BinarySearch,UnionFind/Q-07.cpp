#include <iostream>
#include <vector>

using namespace std;

int parent[256] = {};
int people[256] = {};
bool dead[256] = {};

void init(){
	for (int i = 0; i < 256; ++i)
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

		people[rootA] += people[rootB];
	}
}

int main()
{
	init();

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		int idx = 'A' + i;
		people[idx] = num;
	}

	int count;
	cin >> count;
	for (int i = 0; i < count; ++i)
	{
		string command;
		cin >> command;

		char country1, country2;
		cin >> country1 >> country2;

		if (command == "alliance"){
			unite(country1, country2);
		} else{
			char lose = (people[find(country1)] < people[find(country2)]) ? country1 : country2;

			dead[find(lose)] = true;
		}
	}

	int aliveCount = 0;
	for (int i = 0; i < n; ++i)
	{
		char nation = 'A' + i;
		if (!dead[find(nation)]) aliveCount++;
	}

	cout << aliveCount;
	return 0;
}