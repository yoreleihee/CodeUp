#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int tree[] = {0, 3, 9, 20, 0, 0, 15, 7};

int depth(int idx){
	if (idx >= size(tree) || tree[idx] == 0) return 0;

	int leftDepth = depth(idx * 2);
	int rightDepth = depth(idx * 2 + 1);

	return 1 + max(leftDepth, rightDepth);
}
int main()
{
	int result = depth(1);

	cout << result;
	return 0;
}