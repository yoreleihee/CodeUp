#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string str = "AGGABC";
	int table[256] = {};

	for (int i = 0; i < str.length(); ++i)
	{
		int idx = str[i];

		table[idx]++;
	}

	int count = 0;
	for (int i = 0; i < size(table); ++i)
	{
		if (table[i] != 0){
			count++;
		}
	}

	cout << count <<"종류";
	return 0;
}