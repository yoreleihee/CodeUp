#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int depth;
int branchCount;

int path[100] = {};

void recursive(int level){
	if (level == depth){
		for (int i = 0; i < depth; ++i)
		{
			cout << path[i] << " ";
		}
		cout << endl;

		return;
	}

	for (int i = 0; i < branchCount; ++i)
	{
		path[level] = i;
		recursive(level + 1);
	}
}
int main()
{
	cin >> depth >> branchCount;

	recursive(0);

	return 0;
}