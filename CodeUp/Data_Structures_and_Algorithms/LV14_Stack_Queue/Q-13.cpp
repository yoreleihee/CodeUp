#include <iostream>
#include <vector>
#include <list>
#include <queue>

using namespace std;

int main()
{
	list<int> aArr = {
			2, 6, 3,
			7, 1, 1,
			3, 4, 2
	};

	int result[3][3] = {};

	for (int i = 0; i < 3; ++i)
	{
		auto maxNode = std::max_element(aArr.begin(), aArr.end());

		result[0][i] = *maxNode;
		aArr.erase(maxNode);
	}

	list<int> bArr = {
			6, 4, 2, 4,
			1, 1, 5, 8
	};
	for (int i = 0; i < 3; ++i)
	{
		auto minNode = std::min_element(bArr.begin(), bArr.end());

		result[1][i] = *minNode;
		bArr.erase(minNode);
	}

	list<int> cArr = {
			9, 2, 3,
			4, 2, 1
	};

	for (int i = 0; i < 2; ++i)
	{
		auto minNode = std::min_element(cArr.begin(), cArr.end());

		result[2][i] = *minNode;
		cArr.erase(minNode);
	}

	auto maxNode = std::max_element(cArr.begin(), cArr.end());

	result[2][2] = *maxNode;

	for (int i = 0; i < size(result); ++i)
	{
		for (int j = 0; j < size(result[i]); ++j)
		{
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}