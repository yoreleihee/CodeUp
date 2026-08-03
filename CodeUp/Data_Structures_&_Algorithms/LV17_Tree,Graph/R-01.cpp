#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int map[] = {3, 1, 2, 1, 3,2, 1, 2,1};
int jump;

void recursive(int level, int idx){
	if (idx >= size(map)) {
		cout << "도착" << " ";
		return;
	}

	if (level == 0){
		cout << "시작" << " ";
	}

	cout << map[idx] << " ";
	int next = map[idx] + idx;
	recursive(level + 1, next);

	cout << map[idx] << " ";

	if (level == 0){
		cout << "시작";
	}
}
int main()
{
	cin >> jump;
	recursive(0, jump - 1);

	return 0;
}