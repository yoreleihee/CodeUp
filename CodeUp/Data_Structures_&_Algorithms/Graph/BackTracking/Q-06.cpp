#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

// 5가지 숫자 중 3개의 조합으로 min, max 찾기

int card[5] = {5, 3, 7, 6, 4};

int visited[5] = {};

void findMinMax(int& min, int& max, int level, int value){
	if (level == 3){
		if (min > value){
			min = value;
		}
		if (max < value){
			max = value;
		}
		return;
	}

	for (int i = 0; i < size(card); ++i)
	{
		if (visited[i] == 1) continue;

		visited[i] = 1;
		int next = value * 10 + card[i];
		findMinMax(min, max, level + 1, next);
		visited[i] = 0;
	}
}
int main()
{
	int min = INT_MAX;
	int max = INT_MIN;
	findMinMax(min, max, 0, 0);

	cout << "MAX:" << max << endl;
	cout << "MIN:" << min << endl;
	return 0;
}