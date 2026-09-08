#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int binaryToDecimal(string binary){
	int result = 0;
	for (int i = 0; i < binary.length(); ++i)
	{
		result = result * 2 + (binary[i] - '0');
	}

	return result;
}
int main()
{
	string arr[3];
	for (int i = 0; i < size(arr); ++i)
	{
		cin >> arr[i];
	}

	string maxBinary = "";
	int maxDecimal = 0;
	for (int i = 0; i < size(arr); ++i)
	{
		int decimal = binaryToDecimal(arr[i]);
		if (maxDecimal < decimal){
			maxDecimal = decimal;
			maxBinary = arr[i];
		}
	}

	cout << maxBinary;
	return 0;
}