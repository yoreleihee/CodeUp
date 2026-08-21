#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;


int main()
{
	int n;

	string str;
	cin >> str;

	sort(str.begin(), str.end());

	cin >> n;
	int count[26] = {};
	for (int i = str.length() - n; i < str.length(); ++i)
	{
		int idx = str[i] - 'A';
		count[idx]++;
	}

	int max = 0;
	char answer;
	for (int i = 0; i < size(count); ++i)
	{
		if (max < count[i]){
			max = count[i];
			answer = i + 'A';
		}
	}

	cout << answer;
	return 0;
}