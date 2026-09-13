#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

string operators[] = {
		"!!", "#", "$", "&", "^"
};
int nums[3] = {1, 5, 2};
int cnt = 0;

void calculate(int level, int value){
	if (level == 2){
		if (value > 20){
			cnt++;
		}
		return;
	}
	// ex) value operators[level] nums[level + 1]
	for (int i = 0; i < size(operators); ++i)
	{
		string command = operators[i];
		int curNum = nums[level + 1];

		if (command == "!!"){
			calculate(level + 1, value + curNum * 2);
		}
		else if (command == "#"){
			calculate(level + 1, value - curNum * 2);
		}
		else if (command == "$"){
			calculate(level + 1, value + 10);
		}
		else if (command == "&"){
			calculate(level + 1, value + curNum * curNum);
		}
		else if (command == "^"){
			calculate(level + 1, 0);
		}
	}
}
int main()
{
	calculate(0, nums[0]);
	cout << cnt;

	return 0;
}