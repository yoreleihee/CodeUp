#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;

int steps[7] = {3, 2, 1, 3, 2, 0, 1};
int direct[7] = {1, 1, -1, 1, 1, 0, -1};

void recursive(int idx){
	if (steps[idx] == 0) {
		cout << idx << "번" << endl;
		return;
	}

	if (direct[idx] == 1){
		recursive(idx + steps[idx]);
	}
	else{
		recursive(idx - steps[idx]);
	}

	cout << idx << "번" << endl;
}
int main()
{
	recursive(2);
	return 0;
}