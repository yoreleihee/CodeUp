#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	string value = "BIAH";

	int n;
	cin >> n;

	bool isUsed[4] = {};
	int usedCount = 0;
	int idx = -1;

	while(usedCount < 4){
		int count = 0;
		while (count < n){
			idx = (idx + 1) % 4;
			if (!isUsed[idx]){
				count++;
			}
		}

		isUsed[idx] = true;
		usedCount++;
		cout << value[idx] << " ";
	}

	return 0;
}