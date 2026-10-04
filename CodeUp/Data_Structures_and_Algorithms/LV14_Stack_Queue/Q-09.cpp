#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	int table[4][4] = {
			3, 5, 1, 4,
			2, 2, 1, 1,
			0, 1, 2, 3,
			3, 1, 3, 1
	};

	char ch;
	cin >> ch;

	int idx;
	// 숫자 인덱스
	if (ch >= '0' && ch <= '3'){
		idx = ch - '0';

		for (int i = 0; i < 4; ++i)
		{
			cout << table[idx][i];
		}
	}
	else if (ch >= 'A' && ch <= 'D'){
		idx = ch - 'A';

		for (int i = 0; i < 4; ++i)
		{
			cout << table[i][idx];
		}
	}

	return 0;
}