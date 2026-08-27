#include <iostream>
#include <vector>

using namespace std;

int bst[100] = {};

void insert(int idx, int data){
	if (bst[idx] == 0){
		bst[idx] = data;
		return;
	}

	if (bst[idx] < data){
		insert(idx * 2, data);
	} else{
		insert(idx * 2 + 1, data);
	}
}

void find(int idx, int target){
	if (bst[idx] == target){
		cout << target << ":O" << endl;
		return;
	}

	if (bst[idx] == 0){
		cout << target << ":X" << endl;
		return;
	}

	if (bst[idx] < target){
		find(idx * 2, target);
	} else{
		find(idx * 2 + 1, target);
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int data;
		cin >> data;
		insert(1, data);
	}

	for (int i = 1; i <= 6; ++i)
	{
		find(1, i);
	}

	return 0;
}