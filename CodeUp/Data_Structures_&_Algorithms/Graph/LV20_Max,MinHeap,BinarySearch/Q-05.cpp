#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int getRoot(int num){
	int start = 0;
	int end = num;

	int result = 0;
	while (start <= end){
		int mid = (start + end) / 2;

		if (mid * mid <= num){
			result = mid;
			start = mid + 1;
		} else{
			end = mid - 1;
		}
	}

	return result;
}
int main()
{
	int num;
	cin >> num;

	int result = getRoot(num);
	cout << result;
	return 0;
}