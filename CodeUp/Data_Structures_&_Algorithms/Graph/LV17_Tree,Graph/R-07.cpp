#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int map[5] = {};

void printWarm(){
	for (int i = 0; i < 5; ++i)
	{
		if (map[i] > 0){
			cout << map[i];
		} else{
			cout << "_";
		}
	}

	cout << endl;
}
int main()
{
	int idx = 0;
	int life = 0;

	cin >> idx >> life;

	map[idx] = life;

	printWarm();

	while (true){
		map[idx] -= 1;

		if (idx + 1 >= size(map) || map[idx] <= 0){
			map[idx] = 0;
			printWarm();
			break;
		}

		swap(map[idx], map[idx + 1]);

		printWarm();

		idx++;
	}

	return 0;
}