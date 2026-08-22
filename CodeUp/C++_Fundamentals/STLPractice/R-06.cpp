#include <iostream>
using namespace std;

int img[10][10];
int temp[10][10];

int main()
{
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> img[i][j];

	for (int t = 0; t < k; t++)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				temp[i][j] = img[n-1-j][i];

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				img[i][j] = temp[i][j];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << img[i][j] << " ";
		cout << endl;
	}

	return 0;
}