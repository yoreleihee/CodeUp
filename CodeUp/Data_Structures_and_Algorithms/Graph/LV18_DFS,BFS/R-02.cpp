#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int rotateAngle;
	cin >> rotateAngle;
	
	int rotateCount = rotateAngle / 90;
	int clock[] = {12, 3, 6, 9};

	for (int i = 0; i < rotateCount; ++i)
	{
		int temp = clock[3];
		for (int j = size(clock) - 1; j >= 1; --j)
		{
			clock[j] = clock[j - 1];
		}
		clock[0] = temp;
	}

	cout << clock[0] << " " << clock[3] << " " << clock[1] << " " << clock[2];
	return 0;
}