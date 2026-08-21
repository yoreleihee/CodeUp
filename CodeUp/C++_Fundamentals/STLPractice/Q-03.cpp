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

	vector<int> arr;
	int num;
	cin >> num;
	arr.push_back(num);
	for (int i = 1; i < n; ++i)
	{
		cin >> num;
		arr.push_back(num);

		if (arr.size() >= 3){
			int sz = arr.size();
			if (sz >= 3 && arr[sz-1] == arr[sz-2] && arr[sz-2] == arr[sz-3])
			{
				arr.pop_back();
				arr.pop_back();
				arr.pop_back();
			}
		}
	}

	for (int i = 1; i < arr.size(); ++i)
	{
		int key = arr[i];

		int j = i - 1;
		while (j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}

	for (int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}