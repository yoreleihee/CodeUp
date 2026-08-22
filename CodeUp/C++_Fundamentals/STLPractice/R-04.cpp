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

	int left = 1;
	int right = 50;

	for (int i = 0; i < n; ++i)
	{
		int num;
		string str;
		cin >> num >> str;

		if (str == "DOWN"){
			if (right >= num){
				right = num - 1;
			}
		}

		if (str == "UP"){
			if (left <= num){
				left = num + 1;
			}
		}

		if (left > right){
			cout << "ERROR";
			return 0;
		}
	}

	cout << left << " ~ " << right;
	return 0;
}