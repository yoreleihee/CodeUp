#include <iostream>
#include <vector>

using namespace std;
int tree[20] = {0, 15, 7, 19, 0, 8, 17, 25, 0, 0, 0, 0, 16, 18};

void search(int target){
	int level = 0;
	int idx = 1;

	while (true){
		level++;
		if (idx >= 20 || tree[idx] == 0){
			cout << target << ":없음" << endl;
			break;
		}
		if (tree[idx] == target){
			cout << target << ":" << level << "회만에찾음" << endl;
			break;
		}
		if (tree[idx] > target){
			idx = idx * 2;
		} else{
			idx = idx * 2 + 1;
		}
	}
}

int main()
{
	int target[5] = {};
	for (int i = 0; i < size(target); ++i)
	{
		cin >> target[i];
		search(target[i]);
	}

	return 0;
}