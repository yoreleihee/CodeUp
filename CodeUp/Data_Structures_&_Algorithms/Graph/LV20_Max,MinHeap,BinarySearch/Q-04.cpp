#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

vector<string> table;
int n = 5;

int findStart(int y){
	int start = 0;
	int end = table[y].length() - 1;

	int result = -1;

	while (start <= end){
		int mid = (start + end) / 2;

		if (table[y][mid] == '*'){
			end = mid - 1;
			result = mid;
		} else{
			start = mid + 1;
		}
	}

	return result;
}

int findEnd(int y){
	int start = 0;
	int end = table[y].length() - 1;

	int result = -1;

	while (start <= end){
		int mid = (start + end) / 2;

		if (table[y][mid] == '*'){
			start = mid + 1;
			result = mid;
		} else{
			end = mid - 1;
		}
	}

	return result;
}
int main()
{
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		table.push_back(str);
	}

	for (int i = 0; i < n; ++i)
	{
		int start = findStart(i);
		int end = findEnd(i);

		cout << (end - start + 1) << endl;
	}


	return 0;
}