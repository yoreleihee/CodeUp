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

	vector<string> names;

	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		names.push_back(str);
	}

	sort(names.begin(), names.end(), [](string a, string b){
		if (a.length() != b.length()){
			return a.length() < b.length();
		}

		return a < b;
	});

	for (int i = 0; i < names.size(); ++i)
	{
		cout << names[i] << endl;
	}
	return 0;
}