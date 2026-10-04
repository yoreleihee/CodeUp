#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

string str;

void dfs(int node){
	if (node >= str.length() || str[node] == '#') return;

	if (isupper(str[node]))
		cout << str[node];

	dfs(node * 2);
	dfs(node * 2 + 1);
}
int main()
{
	str = "#MIn#C#O##dE";

	dfs(1);

	return 0;
}