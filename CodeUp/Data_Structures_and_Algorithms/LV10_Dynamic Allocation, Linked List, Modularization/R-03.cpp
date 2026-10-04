#include <iostream>
#include <list>
using namespace std;

int main()
{
	string str[4];
	for (auto & i : str)
	{
		cin >> i;
	}

	for (int x = 0; x < 4; ++x)
	{
		int count = 0;
		for (int y = 0; y < 4; ++y)
		{
			if (str[y][x] != '#') count++;
		}

		cout << count << " ";
	}

	return 0;
}