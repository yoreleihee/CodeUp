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
	cin >> n;
	vector<string> arr;
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		arr.push_back(str);
	}

	int count = 0;
	for (int i = 0; i < arr.size() - 1; ++i)
	{
		for (int j = i + 1; j < arr.size(); ++j)
		{
			string str = arr[i] + arr[j];

			if (str == "HITSMUSIC"){
				count++;
			}
		}
	}

	cout << count;
	return 0;
}