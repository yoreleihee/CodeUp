#include <iostream>
#include <vector>

using namespace std;
char arr[4][10] = {};

void lower(int idx){
	for (int i = 0; i < strlen(arr[idx]); ++i)
	{
		arr[idx][i] = tolower(arr[idx][i]);
	}
}
int main()
{
	for (int i = 0; i < size(arr); ++i)
	{
		cin >> arr[i];
	}

	int minLength = INT_MAX;
	int minIdx = 0;

	int maxLength = INT_MIN;
	int maxIdx = 0;

	for (int i = 0; i < size(arr); ++i)
	{
		int length = strlen(arr[i]);

		if (minLength > length)
		{
			minLength = length;
			minIdx = i;
		}

		if (maxLength < length){
			maxLength = length;
			maxIdx = i;
		}
	}

	lower(maxIdx);
	lower(minIdx);

	for (int i = 0; i < size(arr); ++i)
	{
		cout << arr[i] << endl;
	}
	return 0;
}