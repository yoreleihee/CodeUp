#include <iostream>
#include <vector>

using namespace std;

int bst[100] = {};

void insert(int a, int idx){
	if (bst[idx] == 0){
		bst[idx] = a;
		return;
	}

	if (bst[idx] > a){
		insert(a, idx * 2);
	} else{
		insert(a, idx * 2 + 1);
	}
}

void dfs(int idx){
	if (bst[idx] == 0 || idx >= size(bst)){
		return;
	}

	dfs(idx * 2);
	cout << bst[idx] << " ";
	dfs(idx * 2 + 1);
}
int main()
{
	for (int i = 0; i < 5; ++i)
	{
		int num;
		cin >> num;

		insert(num, 1);
	}

	dfs(1);
	return 0;
}