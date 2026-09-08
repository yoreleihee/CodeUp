#include <iostream>
#include <vector>
#include <queue>

using namespace std;

char value[] = "ox";
int cnt;
char path[10] = {};

void recursive(int level){
	if (level == cnt){
		cout << path << endl;
		return;
	}

	for (int i = 0; i < strlen(value); ++i)
	{
		path[level] = value[i];
		recursive(level + 1);
		path[level] = 0;
	}
}
int main()
{
	cin >> cnt;

	recursive(0);
	return 0;
}