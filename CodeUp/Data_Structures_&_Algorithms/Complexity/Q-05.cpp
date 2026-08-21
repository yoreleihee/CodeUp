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

	sort(arr.begin(), arr.end(), [](string a, string b) {
		if (a.length() != b.length()){
			return a.length() < b.length();
		}

		return a < b;
	});

	for (int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] << endl;
	}
	return 0;
}