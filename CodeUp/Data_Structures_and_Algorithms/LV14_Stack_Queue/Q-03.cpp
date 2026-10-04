#include <iostream>
#include <vector>
#include <list>

using namespace std;

int n;
char path[10];
string str = "ABCD";
int visited[256] = {0};

void recursive(int level){
	if (level == n){
		cout << path << endl;
		return;
	}

	for (int i = 0; i < str.length(); ++i)
	{
		path[level] = str[i];
		int idx = str[i];
		if (visited[idx] == 1){
			continue;
		}

		visited[idx] = 1;
		recursive(level + 1);
		path[level] = 0;
		visited[idx] = 0;
	}
}
int main()
{
	n = 2;
	recursive(0);
	return 0;
}