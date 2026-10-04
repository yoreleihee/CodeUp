#include <iostream>
#include <vector>

using namespace std;

int names[256] = {};
int group[256] = {};
int gCnt = 0;
int n = 0;

void insert(char ch1, char ch2){
	if (group[ch1] != 0 && group[ch2] != 0 && group[ch1] == group[ch2])
		return;

	if (group[ch1] == 0)
		names[n++] = ch1;
	if (group[ch2] == 0)
		names[n++] = ch2;

	if (group[ch1] != 0 && group[ch2] == 0){
		group[ch2] = group[ch1];
	}
	else if (group[ch1] == 0 && group[ch2] != 0){
		group[ch1] = group[ch2];
	}
	else if (group[ch1] == 0 && group[ch2] == 0){
		gCnt++;
		group[ch1] = gCnt;
		group[ch2] = gCnt;
	}
	else{
		int g = group[ch2];
		for (int i = 0; i < n; ++i)
		{
			if (group[names[i]] == g){
				group[names[i]] = group[ch1];
			}
		}
		gCnt--;
	}

}
int main()
{
	insert('A', 'B');
	insert('A', 'C');
	insert('E', 'F');
	insert('E', 'D');
	insert('H', 'G');
	insert('I', 'J');

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		char ch1, ch2;
		cin >> ch1 >> ch2;

		insert(ch1, ch2);
	}

	cout << gCnt;
	return 0;
}