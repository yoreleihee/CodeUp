#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int startIdx;
int evid[] = {-1, 0, 0, 1, 2, 4, 4};
int timeStemp[] = {8, 3, 5, 6, 8, 9, 10};

void recursive(int idx){
	if (idx == 0) {
		cout << "0번index";
		cout << "(출발)" << endl;
		return;
	}

	recursive(evid[idx]);
	cout << idx << "번index" << "(" << timeStemp[idx] << "시)" << endl;
}

int main()
{
	cin >> startIdx;
	recursive(startIdx);
	return 0;
}