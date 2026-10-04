#include <iostream>
#include <vector>
#include <queue>

using namespace std;

string value;
int cnt;
char path[10] = {};
void recursive(int level){
	if (level == cnt){
		cout << path << endl;
		return;
	}

	for (int i = 0; i < value.length(); ++i)
	{
		path[level] = value[i];
		recursive(level + 1);
		path[level] = 0;
	}
}

int main()
{
	cin >> value;
	cin >> cnt;
	recursive(0);
	return 0;
}