#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void mergeSort(vector<int>& arr) {
	for (int i = 0; i < arr.size(); ++i) {
		int j = i - 1;
		int target = arr[i];
		// 적절한 위치를 찾을 때까지 오른쪽으로 밈
		while (j >= 0 && target < arr[j]) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = target;
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