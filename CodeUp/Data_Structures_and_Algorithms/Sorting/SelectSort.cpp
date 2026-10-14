#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void mergeSort(vector<int>& arr) {
	for (int i = 0; i < arr.size(); ++i) {
		int minIdx = i;

		for (int j = i + 1; j < arr.size(); ++j) {
			if (arr[minIdx] > arr[j]) {
				minIdx = j;
			}
		}

		swap(arr[minIdx], arr[i]);
	}
}

int main()
{
	vector<int> arr = {5, 3, 8, 1, 2, 7};

	mergeSort(arr);

	for (int i = 0; i < arr.size(); ++i) {
		cout << arr[i] << " ";
	}

	return 0;
}