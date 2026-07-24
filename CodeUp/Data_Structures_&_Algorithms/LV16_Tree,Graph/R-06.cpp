#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int main()
{
	bool visited[256] = {};

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); ++i)
	{
		int idx = str[i];
		if (visited[idx]) continue;

		for (int j = i + 1; j < str.length(); ++j)
		{
			if (str[i] == str[j]){
				visited[idx] = true;
				break;
			}
		}
	}

	for (int i = 0; i < size(visited); ++i)
	{
		if (visited[i]){
			cout << char(i);
		}
	}
	return 0;
}