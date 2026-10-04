#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

vector<vector<char>> table;
int n;
int result = 0;

void search(){
	int start = 0;
	int end = n * n - 1;

	while (start <= end){
		int mid = (start + end) / 2;
		int y = mid / n;
		int x = mid % n;

		if (table[y][x] == '#'){
			result = mid;
			start = mid + 1;
		} else{
			end = mid - 1;
		}
	}
}
int main()
{
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		vector<char> temp;
		table.push_back(temp);
		for (int j = 0; j < n; ++j)
		{
			char ch;
			cin >> ch;
			table[i].push_back(ch);
		}
	}

	search();

	int y = result / n;
	int x = result % n;

	cout << y << " " << x;


	return 0;
}