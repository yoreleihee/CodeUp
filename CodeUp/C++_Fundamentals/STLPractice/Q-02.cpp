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

	vector<int> top;
	for (int i = 0; i < n; ++i)
	{
		int score;
		cin >> score;

		int j = top.size() - 1;
		top.push_back(0);
		while (j >= 0 && top[j] < score){
			top[j + 1] = top[j];
			j--;
		}

		top[j + 1] = score;

		if (top.size() > 4){
			top.pop_back();
		}
	}

	cout << "금" << top[0] << endl;
	cout << "은" << top[1] << endl;
	cout << "동" << top[2] << endl;
	return 0;
}