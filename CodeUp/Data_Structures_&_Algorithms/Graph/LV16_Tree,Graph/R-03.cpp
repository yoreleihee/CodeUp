#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

int main()
{
	int arr1[6] = {};
	int arr2[6] = {};

	for (int i = 0; i < 6; ++i)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < 6; ++i)
	{
		cin >> arr2[i];
	}

	int newArr[6] = {};
	int carry = 0;
	for (int i = 5; i >= 0; --i)
	{
		int sum = arr1[i] + arr2[i] + carry;
		newArr[i] += sum % 10;
		carry = sum / 10;
	}

	for (int i = 0; i < 6; ++i)
	{
		cout << newArr[i] << " ";
	}
	return 0;
}