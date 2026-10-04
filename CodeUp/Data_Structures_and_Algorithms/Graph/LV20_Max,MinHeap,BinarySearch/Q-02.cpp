#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

vector<string> strArr;

void binarySearch(const string& target, int s, int start, int end, int level){
	if (start > end || level > s){
		cout << "fail" << endl;
		return;
	}

	int mid = (start + end) / 2;

	if (strArr[mid] == target){
		cout << "pass" << endl;
		return;
	}

	if (strArr[mid] < target){
		binarySearch(target, s, mid + 1, end, level + 1);
	} else{
		binarySearch(target, s, start, mid - 1, level + 1);
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string name;
		cin >> name;
		strArr.push_back(name);
	}

	sort(strArr.begin(), strArr.end());

	int m;
	cin >> m;

	for (int i = 0; i < m; ++i)
	{
		string target;
		int s;
		cin >> target >> s;

		binarySearch(target, s, 0, strArr.size() - 1, 0);
	}


	return 0;
}