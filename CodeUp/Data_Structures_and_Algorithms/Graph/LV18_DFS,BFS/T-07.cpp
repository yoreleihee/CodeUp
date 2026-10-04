#include <iostream>
#include <vector>
#include <queue>

using namespace std;

string names[3] = {};
string path[3] = {};

void recursive(int level){
	if (level == 3){
		for (int i = 0; i < 3; ++i)
		{
			cout << path[i] << " ";
		}
		cout << endl;
		return;
	}

	for (int i = 0; i < size(names); ++i)
	{
		path[level] = names[i];
		recursive(level + 1);
		path[level] = "";
	}
}
int main()
{
	for (int i = 0; i < 3; ++i)
	{
		cin >> names[i];
	}
	recursive(0);
	return 0;
}