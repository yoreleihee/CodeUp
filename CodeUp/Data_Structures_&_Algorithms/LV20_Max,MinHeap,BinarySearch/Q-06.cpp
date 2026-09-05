#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

string str; // 10글자

int search(){
	int start = 0;
	int end = str.length() - 1;

	int result = -1;
	while (start <= end){
		int mid = (start + end) / 2;

		if (str[mid] == '#'){
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
	cin >> str;
	int result = search();

	cout << ((result + 1) * 10) << "%";

	return 0;
}